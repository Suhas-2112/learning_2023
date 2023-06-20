//Write a program using structures to calculate the difference between two time periods using a user-defined function.

#include <stdio.h>

struct time
{
    int hours;
    int minutes;
    int seconds;
};

typedef struct time time;

//Fucntion to find Difference in time periods
time getTimeDiff(time* t1,time* t2){
    time difference;
    int totalseconds1,totalseconds2;
    totalseconds1 = t1->hours *3600 + t1->minutes * 60 + t1->seconds;
    totalseconds2 = t2->hours *3600 + t2->minutes * 60 + t2->seconds;

    int diffseconds = totalseconds2 - totalseconds1;

    difference.hours = diffseconds/3600;
    difference.minutes = (diffseconds %3600)/60;
    difference.seconds = (diffseconds %3600)%60;

    return difference;
}


int main(){
    time time1,time2,diff;


    printf("Enter the first time period (hh:mm:ss) : ");
    scanf("%d:%d:%d", &time1.hours, &time1.minutes, &time1.seconds);


    printf("Enter the second time period (hh:mm:ss): ");
    scanf("%d:%d:%d", &time2.hours, &time2.minutes, &time2.seconds);

    diff = getTimeDiff(&time1,&time2);

    printf("Difference: %02d:%02d:%02d\n", diff.hours, diff.minutes, diff.seconds);

    return 0;
}