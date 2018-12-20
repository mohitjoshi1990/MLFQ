#include "types.h"
#include "stat.h"
#include "user.h"

/* CS550 ATTENTION: to ensure correct compilation of the base code, 
   stub functions for the system call user space wrapper functions are provided. 
   REMEMBER to disable the stub functions (by commenting the following macro) to 
   allow your implementation to work properly. */
//#define STUB_FUNCS
#ifdef STUB_FUNCS
int setpriority(int pid, int priority) {}
#endif


int 
main(int argc, char * argv[])
{
    if(atoi(argv[1]) > 0 && atoi(argv[2]) >= 0){
      setpriority(atoi(argv[1]), atoi(argv[2]));
    }else{
      printf(1, "Error in either process id or priority \n");
    }
    exit(); //return 0;
}
