#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <libgen.h>
#include "monitor.h"

void leerDirectorio(const char *str){
    DIR *dir = NULL;
    struct dirent *dp;

    if((dir = opendir(str)) == NULL){
        perror("No se pudo abrir ");
        printf("%s\n", str);
        exit(1);
    }

    while((dp = readdir(dir)) != NULL){
        printf("Tipo: %i ", dp->d_type);
        printf("Nombre: %s\n", dp->d_name);
    }

    closedir(dir);
}