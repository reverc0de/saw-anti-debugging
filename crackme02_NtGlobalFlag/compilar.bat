@echo off
nasm -g -f win32 --prefix _ crackme02_NtGlobalFlag_asm.asm -l crackme02_NtGlobalFlag_asm.lst -o crackme02_NtGlobalFlag_asm.o
gcc -c crackme02_NtGlobalFlag.c -o crackme02_NtGlobalFlag.o
gcc crackme02_NtGlobalFlag.o crackme02_NtGlobalFlag_asm.o -o crackme02_NtGlobalFlag.exe