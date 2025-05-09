
# 🧠 Monitor de Procesos en Linux

Este proyecto en C implementa un **monitor de procesos** básico para sistemas Linux. Su objetivo es analizar el sistema en tiempo real y mostrar información relevante sobre el estado y comportamiento de los procesos.

---

## ⚙️ Características principales

- 📋 Listado de procesos activos
- 📊 Visualización del uso de CPU y memoria
- 🔍 Lectura de archivos del sistema `/proc`
- 🖥️ Interfaz por consola simple y clara
- 🚫 Posibilidad de detectar procesos zombies o detenidos

---

## 📁 Estructura del Proyecto

```plaintext
.
├── src/
│   ├── main.c             # Punto de entrada principal
│   ├── monitor.c          # Lógica para analizar procesos
│   └── monitor.h          # Prototipos y estructuras utilizadas
├── Makefile               # Compilación del proyecto
└── README.md              # Este archivo
```

---

## 🛠️ Tecnologías y herramientas

- Lenguaje: **C (C99)**
- Sistema operativo: **Linux**
- Entorno de desarrollo: Visual Studio Code / Vim
- Compilador: **GCC**

---

## 🧪 Compilación y ejecución

### Requisitos

- Sistema Linux
- `gcc` instalado

### Pasos

```bash
# Clonar el repositorio
git clone https://github.com/Neud4n/monitor-procesos.git

# Entrar al proyecto
cd monitor-procesos

# Compilar
make

# Ejecutar
./monitor
```

---

## 📚 Referencias

Durante el desarrollo del proyecto se consultaron diversas fuentes técnicas y documentales, entre ellas:

- [man proc (Linux)](https://man7.org/linux/man-pages/man5/proc.5.html)
- [<dirent.h>](https://pubs.opengroup.org/onlinepubs/009604599/basedefs/dirent.h.html)
- GNU Manual: [glibc](https://www.gnu.org/software/libc/manual/)  
- [Stack Overflow](https://stackoverflow.com/) (para casos puntuales y resolución de errores)
- Notas propias

---

## 👨‍💻 Autor

**dan**  
GitHub: [@Neud4n](https://github.com/Neud4n)

---

> Proyecto realizado con fines educativos y de aprendizaje del sistema Linux a bajo nivel.