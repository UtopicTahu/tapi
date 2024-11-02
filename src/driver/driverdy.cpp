#include <stdlib.h>


#ifdef _WIN32

int dv_type = 3;

#elif __linux

int dv_type = 1;

#else 

int dv_type;

#endif 


void DrType_Run()
{
    switch (dv_type)
    {
    case 1:
        system("echo Mesa Drivers\n");
        break;

    case 2:
        system("echo Nvidia Drivers \n");
        break;

    case 3:
        system("echo AMD Drivers\n");
        break;

    default:
        system("echo OpenGl is not support\n");
        break;
    }
}