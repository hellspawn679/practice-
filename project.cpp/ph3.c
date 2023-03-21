//date - 30/11/2022
//name - mehul gatuam 
//problem - find leap year  
//input range- {}
//input =
//output =

#include<stdio.h>
int main()
{
      int a;
    printf("enter a year \n");
    scanf("%d",&a);
    if(((a%4==0)&&(a%100!=0))||(a%400==0)){
      printf("the year is a leap year ");
      }
      else{
        printf("the year is not a leap year");
      }
    return 0;
}