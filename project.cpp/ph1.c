//date - 30/11/2022
//name - mehul gatuam 
//problem - find the greater of two numbers 
//input range- {}
//input = 4,5
//output =5
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter two numbers\n ");
    scanf("%d %d", &a,&b);
    if (a > b)
    {
      printf("%d is greater then %d",a,b);
    }
    else
    { 
        printf("%d is greater then %d",b,a);
    }
    return 0;
}