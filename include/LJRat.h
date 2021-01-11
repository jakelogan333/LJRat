#ifndef LJRAT_H
#define LJRAT_H

#include <Windows.h>

#ifndef BUILD_DLL

    #define EXPORT_FUNC

#else

    #define EXPORT_FUNC __declspec(dllexport)

#endif //BUILD_DLL

EXPORT_FUNC INT Run(VOID);

#endif