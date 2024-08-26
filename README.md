An undetectable program that unlocks all attachments in Battlefield 4
(must run as admin)

## Compile:
`zig build-exe -target x86_64-windows-none -L"/home/hel/.wine/drive_c/windows/system32/" -dynamic -lkernel32 -luser32 -cflags --std=c++20 -- --subsystem windows -fentry=Main -O ReleaseSmall -fstrip -flto --gc-sections -ffunction-sections main.cpp -o Bf4_attachmentsUnlock.exe`
