// name-Mehul gautam
// batch-IMG
// roll number-2022IMG040
// date -19/12/2022
#include <stdio.h>
int main()
{
    int nu;
    int num1 =0;
    int num2 =0;
    int num3 =0;
    printf("Enter the amount that is needed : \n");
    scanf("%d", &nu);
    while (nu >= 100)
    {
        
        num1++;
        nu = nu - 100;
    }
    while (nu >= 50)
    {
        num2++;
        nu = nu - 50;
    }
    while (nu >= 10)
    {
        num3++;
        nu = nu - 10;
    }
    printf("the number of 100,50 and 10 notes are %d,%d and %d respectively ",num1,num2,num3);

        return 0;
}