#include "lib.h"
#include "Windows.h"

typedef void(__stdcall* beef_f_func)(void);


int main()
{
    PrintHello();

    HMODULE dll_module = LoadLibrary("beef-interop-lib.dll");

    if (!dll_module) {
        std::cout << "could not load the dynamic library" << std::endl;
        return EXIT_FAILURE;
    }

    beef_f_func func = (beef_f_func)GetProcAddress(dll_module, "SayHello");
    if (!func) {
        std::cout << "could not locate the function" << std::endl;
        return EXIT_FAILURE;
    }

    //while (1)
    {
        func();
    }


    return 0;
}