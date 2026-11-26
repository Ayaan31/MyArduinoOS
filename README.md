# ArduinoOS

A lightweight, unix-inspirted embedded operating system project for my Arduino Mega 2560, written in C/C++

## Overview

With ArduinoOS, I want to explore the fundamental concepts of operating system design and embedded systems programming on a this 8-bit AVR microcontroller. The project aims to implement core operating system components from scratch, gradually transitioning toward bare-metal programming.

## Target Hardware

| Specification | Details |
|---|---|
| Board | Arduino Mega 2560 R3 |
| Microcontroller | ATmega2560 |
| Architecture | 8-bit AVR |
| Clock Speed | 16 MHz |
| Flash Memory | 256 KB |
| SRAM | 8 KB |
| EEPROM | 4 KB |

## Development Environment

- Ubuntu 26.04 (WSL 2)
- C/C++
- Arduino CLI
- AVR GCC Toolchain
- USB Serial Communication
- I use usbipd-win, a Windows utility that shares locally connected USB devices with other machines

## Development Roadmap

- [x] AVR cross-compilation environment
- [x] Firmware compilation and upload
- [x] System boot sequence
- [x] Serial communication
- [ ] Interactive command-line shell
- [ ] Command parsing and execution
- [ ] Unix-inspired commands
- [ ] Virtual filesystem
- [ ] Memory management
- [ ] Task scheduling
- [ ] Hardware interrupt handling
- [ ] Bare-metal device drivers
- [ ] Persistent storage

## Building

```bash
arduino-cli compile --fqbn arduino:avr:mega .
```

## Uploading

```bash
arduino-cli upload -p /dev/ttyACM0 --fqbn arduino:avr:mega .
```

## Serial Monitor

```bash
arduino-cli monitor -p /dev/ttyACM0 --config baudrate=115200
```

## Project Status

Currently in early development (v0.1.0). The firmware implements a basic boot sequence and serial output. Future versions will introduce interactive system functionality and kernel components

## Project Goals

- Understand operating system internals
- Learn toolchains
- Explore low-level hardware interaction
- Implement resource management on constrained hardware
- Gain experience with cross-compilation and embedded development
- Develop a functional miniature embedded operating system without relying on an existing OS
