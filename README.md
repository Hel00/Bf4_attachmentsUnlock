An undetectable program that unlocks all attachments in Battlefield 4
(must run as admin)

Also windows will most likely see this as a virus so you gotta add it as a trusted program

## Compile (I use Arch btw):
`clang++ -Oz -s main.cpp --target=x86_64-windows-none -L"/path/to/.wine/drive_c/windows/system32/" -dynamic -lkernel32 -luser32 -nostdlib -nostartfiles -ffreestanding -c --std=c++23 -fuse-ld=lld`

## Link:
`ld.lld -m i386pep -o main.exe main.o /path/to/kernel32.dll /path/to/user32.dll -O3 --gc-sections --strip-all --file-alignment=16 --section-alignment=16 --subsystem windows -eMain`
