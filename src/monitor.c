#define _DEFAULT_SOURCE // Para habilitar macros (DT_DIR, DT_REG, etc.)
#include <stdlib.h>
#include <stdio.h> 
#include <dirent.h>
#include "monitor.h"

void leerDirectorio(const char *str){
    DIR *dir = NULL;
    struct dirent *dp;

    if((dir = opendir(str)) == NULL){
        fprintf(stderr, "Error al abrir el directorio %s\n", str);
        perror("");
        exit(EXIT_FAILURE);
    }

    while((dp = readdir(dir)) != NULL){
        switch(dp->d_type){
            case DT_DIR:
                printf("Directorio: ");
            break;
            case DT_REG:
                printf("Archivo: ");
            break;
            case DT_LNK:
                printf("Enlace: ");
            break;
            default:
                printf("Otro: ");
            break;
        }
        printf("%s\n", dp->d_name);
    }
    closedir(dir);
}