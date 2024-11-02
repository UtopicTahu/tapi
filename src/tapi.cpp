#include "opengl/OpenGL_Run.h"
#include "opencl/OpenCL_Run.h"
#include "vulkan/Vulkan_Run.h"
#include "driver/driverdy.h"



int main(int argc, char** argv)
{
  system("echo TApi \n");
  DrType_Run();
  OpenGL_Run();
  OpenCL_Run();
  Vulkan_Run();
  //APIs_Error();
} 





