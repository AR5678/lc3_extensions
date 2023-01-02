#include <time.h>

#include <stdio.h>
#include <inttypes.h>
#include <time.h>

#include <sys/time.h>

/* Returns the current time in microseconds.
 */
long getMicrotime(){
	struct timeval currentTime;
	gettimeofday(&currentTime, NULL);
	return currentTime.tv_sec * (int)1e6 + currentTime.tv_usec;
}

int64_t mill_sec()
{
    struct timespec now;
    timespec_get(&now, TIME_UTC);
    return ((int64_t) now.tv_sec) * 1000 + ((int64_t) now.tv_nsec) / 1000000;
}

int main(void){
    
    printf("this is %d\n", getMicrotime());
    for (int i; i < 1000; i++){
        int j = 1;
    }
    printf("this is %d\n", getMicrotime());

}

int main1(void)
{
    int a = mill_sec(); 
    printf("Unix timestamp with millisecond precision: %x\n", a & 0xffff);

    for (int i; i < 100000; i++){
        int j = 1;
    }
    int r = mill_sec(); 
    printf("Unix timestamp with millisecond precision: %x\n", r & 0xffff);
}


/*

int main(void)
{
    /* int rand(void);
    int r = rand();
    printf("this is %d", r); 

}*/