#include <stdlib.h>
#include "OpenGL_Run.h"


using namespace std;


void OpenGL_Run()
{
  gl_var = 20;
  switch (gl_var)
  {
    case 1:
      system("echo Opengl 1.0\n");
    break;
    
    case 2:
      system("echo Opengl 1.1\n");
    break;

    case 3:
     system("echo Opengl 1.2\n");
    break;
  
    case 4:
     system("echo Opengl 1.2.1\n");
    break;
    
    case 5:
     system("echo Opengl 1.3\n");
    break;
    
    case 6:
     system("echo Opengl 1.4\n");
    break;
     
    case 7:
     system("echo Opengl 1.5\n");
    break;
    
    case 8:
     system("echo Opengl 2.0\n");
    break;
    
    case 9:
     system("echo Opengl 2.1\n");
    break;
   
    case 10:
     system("echo Opengl 3.0\n");
    break;
    
    case 11:
     system("echo Opengl 3.1\n");
    break;
    
    case 12:
     system("echo Opengl 3.2\n");
    break;

    case 13:
     system("echo Opengl 3.3\n");
    break;
    
    case 14:
     system("echo Opengl 4.0\n");
    break;
    
    case 15:
     system("echo Opengl 4.1\n");
    break;

    case 16:
     system("echo Opengl 4.2\n");
    break;
    
    case 17:
     system("echo Opengl 4.3\n");
    break;

    case 18:
     system("echo Opengl 4.4\n");
    break;
    
    case 19:
     system("echo Opengl 4.5\n");
    break;

    case 20:
     system("echo Opengl 4.6\n");
    break;


    default:
     system("echo OpenGl is not support\n");
    break;
  }
  
}