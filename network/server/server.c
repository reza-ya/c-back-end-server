#include "stdio.h"
#include "time.h"



int main() {
    time_t timer;
    time(&timer);
    printf("your local time is: %s", ctime(&timer));
    return 0;
}