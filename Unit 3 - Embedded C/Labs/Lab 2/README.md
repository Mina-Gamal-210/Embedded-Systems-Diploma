# Bare-Metal LED Toggle – STM32F103C8T6

## 👨‍💻 Project Overview

This project is written from scratch by **Eng. Mina Gamal**.  
It implements a bare-metal application on the **STM32F103C8T6** ARM Cortex-M3 microcontroller to toggle an LED connected to **PA5**.

---

## 🔧 What’s Included

- 🟢 **LED Toggling Logic** using GPIO directly (register-level programming)  
- ⚙️ **Custom Startup Code** written in C/Assembly  
- 🧠 **Linker Script** to manage memory layout manually  
- 🏗️ **Makefile** to automate the build process using GCC toolchain  

---

## 💡 Key Concepts

- Vector table and reset handler setup  
- Stack pointer initialization and `.data`/`.bss` section handling  
- Using the `thumb` instruction set  
- Manual clock and GPIO register configuration  
- Compilation and linking without any HAL or CMSIS libraries  

---

## 🛠 Build Instructions

```bash
make clean_all
make

```

 ## 📦 Build Output – Automatically Generated Files

After running the `make` command, the following files are generated automatically during the build process:
```bash
# Build Output Files:

1. *.o           → Object files generated from .c and .s source files
2. .elf          → ELF file used for debugging and flashing
3. .hex          → HEX file for flashing with compatible tools
4. .bin          → Raw binary image for direct memory flashing
5. map_file.map  → Linker map file showing memory layout and symbols

```


