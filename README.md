An undetectable program that unlocks all attachments in Battlefield 4
(must run as admin)

## Compile:
`clang++ -Oz -s main.cpp --target=x86_64-windows-none -L"/home/hel/.wine/drive_c/windows/system32/" -dynamic -lkernel32 -luser32 -nostdlib -nostartfiles -ffreestanding -c --std=c++23 -fuse-ld=lld`

## Link:
`ld.lld -m i386pep -o main.exe main.o /home/hel/.wine/drive_c/windows/system32/kernel32.dll /home/hel/.wine/drive_c/windows/system32/user32.dll -O3 --gc-sections --strip-all --file-alignment=16 --section-alignment=16 --subsystem windows`
