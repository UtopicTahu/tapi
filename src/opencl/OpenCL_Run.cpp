#include <stdlib.h>
#include "OpenCL_Run.h"
using namespace std;

void OpenCL_Run()
{
    cl_var = 7;
    switch (cl_var)
    {
        case 1:
            system("echo Opencl 1.0\n");
            break;

        case 2:
            system("echo Opencl 1.1\n");
            break;

        case 3:
            system("echo Opencl 1.2\n");
            break;

        case 4:
            system("echo Opencl 2.0\n");
            break;

        case 5:
            system("echo Opencl 2.1\n");
            break;
        case 6:
            system("echo Opencl 2.2\n");
            break;

        case 7:
            system("echo Opencl 3.0\n");
            break;

        default:
            system("echo Opencl is not support\n");
            break;
    }

}
