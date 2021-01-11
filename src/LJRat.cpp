#include <Windows.h>
#include <iostream>
#include <LJRat.h>

using namespace std;

#ifndef BUILD_DLL

INT wmain(INT argc, WCHAR *argv[])
{
    Run();
}

#else

#define EXPORT_FUNC __declspec(dllexport)

BOOL WINAPI DllMain(
    HINSTANCE hinstDLL,  // handle to DLL module
    DWORD fdwReason,     // reason for calling function
    LPVOID lpReserved )  // reserved
{
    // Perform actions based on the reason for calling.
    switch( fdwReason ) 
    { 
        case DLL_PROCESS_ATTACH:
            break;

        case DLL_THREAD_ATTACH:
            break;

        case DLL_THREAD_DETACH:
            break;

        case DLL_PROCESS_DETACH:
            break;
    }

    return TRUE;
}

#endif // BUILD_DLL

EXPORT_FUNC INT Run(VOID)
{
    cout << "Exported func" << endl;

    return EXIT_SUCCESS;
}