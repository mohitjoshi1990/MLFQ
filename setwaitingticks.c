#include "types.h"
#include "stat.h"
#include "user.h"

/* CS550 ATTENTION: to ensure correct compilation of the base code, 
   stub functions for the system call user space wrapper functions are provided. 
   REMEMBER to disable the stub functions (by commenting the following macro) to 
   allow your implementation to work properly. */
//#define STUB_FUNCS
#ifdef STUB_FUNCS
int setwaitingticks(int waiting_thres) {}
#endif


int 
main(int argc, char * argv[])
{
    if(atoi(argv[1]) > 0){
      setwaitingticks(atoi(argv[1]));
    }else{
      printf(1, "Error in setting waiting ticks threshold \n");
    }
    exit(); //return 0;
}
