# 🔦 Bare-Metal LED Toggle – TM4C123G (Tiva C LaunchPad)

This project is written from scratch by **Eng. Mina Gamal**, it is a **bare-metal embedded application** targeting the **TM4C123G (Tiva C) ARM Cortex-M4** microcontroller. It toggles an LED connected to **Port F, Pin 3** entirely without any HAL, drivers, or libraries — all low-level code is **implemented from scratch**.

---

## 🧠 What’s Inside

- ⚙️ **main.c** – Core application logic for toggling the LED using direct register access
- 🚀 **startup.s / startup.c** – Custom startup code with vector table and reset handler
- 📦 **linker.ld** – Custom linker script defining memory regions and section placements
- 🛠️ **Makefile** – Complete build system to compile, link, and generate the final binary

---

## 📌 Features

- ✅ Bare-metal (no RTOS, no libraries)
- ✅ Direct register-level programming
- ✅ Full control over startup flow and memory layout
- ✅ Portable, minimal, and educational

---

## 📷 Demo (Keil Simulation GIF)

![LED Toggle Demo](https://github.com/Mina-Gamal-210/Embedded-Systems-Diploma/blob/main/Unit%203%20-%20Embedded%20C/Labs/Lab%203/Outputs/Keil%20Simulation.gif)

This animation shows the LED toggling behavior simulated using **Keil uVision**.

---

## 🧾 Build Instructions

### 🔧 Requirements

- `arm-none-eabi-gcc` toolchain
- `make`
- `Keil uVision` to simulate the board



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
4. .axf          → Full ELF-based output with debug info
5. .bin          → Raw binary image for direct memory flashing
6. map_file.map  → Linker map file showing memory layout and symbols

```


