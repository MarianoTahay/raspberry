# Notes

- Watch Pintos `intr_frame` to see what values stores from the CPU.
    
    [x86 Assembly/X86 Architecture - Wikibooks, open books for an open world](https://en.wikibooks.org/wiki/X86_Assembly/X86_Architecture)
    

---

# Documentation

[Raspberry Pi Documentation - Raspberry Pi Pico and Pico W](https://www.raspberrypi.com/documentation/microcontrollers/raspberry-pi-pico.html)

## Getting started with Raspberry Pi Pico

[](https://datasheets.raspberrypi.com/pico/getting-started-with-pico.pdf)

https://github.com/raspberrypi/pico-setup-windows/blob/master/docs/tutorial.md

## Raspberry Pi Pico C/C++ SDK

[](https://datasheets.raspberrypi.com/pico/raspberry-pi-pico-python-sdk.pdf)

## RP2040 Datasheet

[](https://datasheets.raspberrypi.com/rp2040/rp2040-datasheet.pdf)

## ARMv6-M Architecture Reference Manual

[](https://documentation-service.arm.com/static/5f8ff05ef86e16515cdbf826)

---

# Readings

[Get Started with ARM Assembly on the Pi Pico](https://blog.smittytone.net/2022/06/19/get-started-with-arm-assembly-on-the-pi-pico/)

[Raspberry Pi Pico Assembly Programming (Part 1)](https://codalogic.com/blog/2023/01/07/Pico-Assembly-Programming)

---

# Windows Commands

## Install Chocolately

```bash
Set-ExecutionPolicy Bypass -Scope Process
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))
```

## Install MinGW

```bash
choco install mingw
```

> Add binaries to PATH
> 

## Install CMake

```bash
choco install cmake
```

## Install GNU Toolchain

[](https://developer.arm.com/-/media/Files/downloads/gnu/13.2.rel1/binrel/arm-gnu-toolchain-13.2.rel1-mingw-w64-i686-arm-none-eabi.exe?rev=07af46c1f7574a77969b0f764a1255f0&hash=CD4EEFA52E00B98CAC037B4936A76E56830E5248)

> Add binaries to PATH.
> 

## Install SDK

https://github.com/raspberrypi/pico-sdk

> Add `PICO_SDK_PATH` to path.
> 

## Download examples

https://github.com/raspberrypi/pico-examples

## Compile code

```bash
cd .\build\
cmake -G "MinGW Makefiles" ..
mingw32-make
```

---

# ARM Project

[Proyecto_ARM_-_Fase_1_-_2024.pdf](https://prod-files-secure.s3.us-west-2.amazonaws.com/0419e5ae-6102-40cf-bcb9-88b6c7d4137d/f129e988-4ad5-4c42-a99e-f4fe66c2499b/Proyecto_ARM_-_Fase_1_-_2024.pdf)
