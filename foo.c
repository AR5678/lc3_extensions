#include <stdio.h>
#include <time.h>
int main(void)
{
    /* int rand(void);
    int r = rand();
    printf("this is %d", r); */

    time_t seconds;
     
    seconds = time(NULL);
    printf("Seconds since January 1, 1970 = %x\n", seconds & 0xffff );

    return(0);
}