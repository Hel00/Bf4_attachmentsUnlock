#include "types.hpp"
#include "win32Utils.hpp"
#include "memory.hpp"

extern "C" void Main()
{
  static constexpr const char *PROCESS_NAME = "Battlefield 4";
  static constexpr auto PROCESS_ALL_ACCESS = (0x000F0000L | 0x00100000L | 0xFFF); // 2035711
  static constexpr auto DELAY = 10'000;

  DWORD processId;
  HWND processHwnd = FindWindowA(0, PROCESS_NAME);
  GetWindowThreadProcessId(processHwnd, &processId);
  HANDLE processHandle = OpenProcess(PROCESS_ALL_ACCESS, false, processId);

  uint64_t unlockEverything;

  while (true)
  {
    unlockEverything = readMemory(processHandle, 0x1423717C0) + 0x54;
    writeMemory(processHandle, unlockEverything, 1);

    Sleep(DELAY);
  }
}

extern "C" void WinMain() {}
extern "C" void wWinMainCRTStartup() { Main(); }
extern "C" void _fltused() {}
extern "C" void _tls_index() {}
