#include <stdio.h>
int main()
{
    int n;
    int num1=0;
    int num2=0;
    printf("Enter the bit size of binary number :");
    scanf("%d", &n);
    int a[n];
    printf("enter the binary number :");
    int sum = 0;
    int y = 1;
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &a[i]);
        if (a[i] == 1)
        {
            num1++;
        }
        else
        {
            num2++;
        }
        sum += y * a[i];
        y *= 2;
    }
    printf("the decimal equailent is %d\n ", sum);
    printf("the number of 1's and 0's are %d %d",num1,num2);
    return 0;
}
