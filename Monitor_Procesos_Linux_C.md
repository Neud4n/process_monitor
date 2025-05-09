
# 🖥️ Proyecto: Monitor de Procesos en Linux (C)

Este documento detalla las distintas fases para construir, paso a paso, un monitor de procesos en Linux utilizando el lenguaje C. Cada etapa profundiza en aspectos clave del sistema y de programación en C de bajo nivel.

---

## 🟢 FASE 1: Lectura de `/proc` y obtención básica de procesos

### ✅ Objetivo:
Mostrar en consola todos los procesos activos con información básica:
- PID
- Nombre del proceso
- Estado (R, S, Z…)
- Memoria virtual usada (VmSize)

### 📌 Conceptos a estudiar:
- Estructura de `/proc`
- Archivos: `/proc/[PID]/status`, `/proc/[PID]/cmdline`
- Funciones C: `opendir`, `readdir`, `fopen`, `fgets`, `strstr`, `sscanf`

### 🧪 Mini-proyecto:
Mostrar tabla con procesos activos y su info básica extraída de `/proc/[PID]/status`.

---

## 🟡 FASE 2: Calcular uso de CPU por proceso

### ✅ Objetivo:
Mostrar también cuánto CPU está usando cada proceso.

### 📌 Conceptos a estudiar:
- Archivo `/proc/[PID]/stat`
- Campos `utime`, `stime`, `starttime`, `vsize`
- Archivo `/proc/stat` para total de CPU
- Tiempos del sistema: `sysconf(_SC_CLK_TCK)`
- Medición relativa: tomar dos muestras con `sleep()` y comparar

### 🧪 Mini-proyecto:
Agregar una columna a la tabla anterior con `%CPU` estimado cada X segundos.

---

## 🟠 FASE 3: Refrescado en tiempo real

### ✅ Objetivo:
Actualizar la tabla cada X segundos, como hace `top`.

### 📌 Conceptos a estudiar:
- `sleep`, `usleep`, `nanosleep`
- Limpiar la pantalla: códigos ANSI (por ejemplo, `"[H[J"`)
- `while(1)` con ciclos de actualización

### 🧪 Mini-proyecto:
Mostrar una tabla que se actualice automáticamente cada 2 segundos.

---

## 🔵 FASE 4: Interfaz avanzada (opcional con `ncurses`)

### ✅ Objetivo:
Hacer la UI más amigable, con colores y navegación.

### 📌 Conceptos a estudiar:
- Biblioteca `ncurses`: inicialización, impresión en pantalla, ventanas, input
- Manejo de teclas

### 🧪 Mini-proyecto:
Agregar un UI con `ncurses` y permitir ordenar por columnas o pausar el monitoreo.

---

## 🔴 FASE 5: Extensiones (filtrado, logging, exportación)

### ✅ Objetivo:
Agregar funcionalidades extra útiles.

### 📌 Ideas:
- Filtrar procesos por usuario, PID o nombre.
- Exportar datos a CSV o log.
- Mostrar estadísticas globales: total de procesos, uso total de memoria, etc.
- Agregar argumentos por consola (`argc` / `argv`).

---

## 📌 Recursos adicionales sugeridos

- `man 5 proc`
- `man 3 opendir`
- `man 3 readdir`
- `man 3 fopen`
- Código fuente de `top`, `htop`, `ps` (pueden ser encontrados en GitHub o en proyectos como `procps`)

---

**Sugerencia:** Completá cada fase con un mini-proyecto o versión incremental de tu programa. Guardá cada versión por separado para mantener el control del progreso.