#include <stdio.h>
#include <stdlib.h>
#include<time.h>


//Create a console application that prints the current date and time



int d1,d2,d3,m1,m2,m3,y1,y2,y3;
void year(int d1,int m1,int y1,int d2,int m2,int y2);
void main()
{
printf("Please enter the current date \n");
printf("Enter the day:");
scanf("%d",&d1);
printf("Enter the month:");
scanf("%d",&m1);
printf("Enter the year:");
scanf("%d",&y1);

printf("Now please enter the date of birth:\n");
printf("Enter the day:");
scanf("%d",&d2);
printf("Enter the month:");
scanf("%d",&m2);
printf("Enter the year:");
scanf("%d",&y2);
year(d1,m1,y1,d2,m2,y2);
}

void year(int d1,int m1,int y1,int d2,int m2,int y2)
{
    if(d2>d1)
    {
    m1=m1-1;
    d1=d1+30;
    }
    if(m2>m1)
    {
    y1=y1-1;
    m1=m1+12;
    }
    if(y2>y1)
    {
    exit(0);
    }
    d3=d1-d2;
    m3=m1-m2;
    y3=y1-y2;
    printf("current age is: \n year %d\n ",y3);
    printf("After 10 years: \n year %d ",y3+10);
    return(0);
}

