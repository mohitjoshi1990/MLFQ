#include "types.h"
#include "stat.h"
#include "user.h"

/* CS550 ATTENTION: to ensure correct compilation of the base code, 
   stub functions for the system call user space wrapper functions are provided. 
   REMEMBER to disable the stub functions (by commenting the following macro) to 
   allow your implementation to work properly. */
//#define STUB_FUNCS
#ifdef STUB_FUNCS
int setrunningticks(int time_allotment) {}
#endif


int 
main(int argc, char * argv[])
{
    int time_allotment = atoi(argv[1]);
    if(time_allotment > 0){
      setrunningticks(time_allotment);
    }else{
      printf(1, "Error in setting running ticks threshold \n");
    }
    exit(); //return 0;
}
