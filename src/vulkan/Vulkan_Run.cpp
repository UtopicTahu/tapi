#include <stdlib.h>
#include "Vulkan_Run.h"
using namespace std;



void Vulkan_Run()
{
  vk_var = 4;
  switch (vk_var)
  { 
   case 1:
      system("echo Vulkan 1.0\n");
    break;

    case 2:
      system("echo Vulkan 1.1\n");
    break;

    case 3:
     system("echo Vulkan 1.2\n");
    break;
  
    case 4:
     system("echo Vulkan 1.3\n");
    break;
    
    default:
     system("echo Vulkan is not support\n");
    break;
  }  
} 