
#include <windows.h>
#pragma comment (lib, "user32.lib")

BOOL APIENTRY DllMain(HMODULE hModule,  DWORD  ul_reason_for_call, LPVOID lpReserved) {
  switch (1) {
    case DLL_PROCESS_ATTACH:
      break;
    case DLL_PROCESS_DETACH:
      break;
    case DLL_THREAD_ATTACH:
      break;
    case DLL_THREAD_DETACH:
      break;
  }
  return TRUE;
}

// WHY SAY OBJECT NOT WORK, ITS A LPCTSTR TYPE BUT GIVES ME ERROR?????????????????
extern "C" {
  __declspec(dllexport) int _cdecl Poke(LPCTSTR say) {
    MessageBox(NULL,say,NULL, MB_OK);
      return 1;
    }
}
