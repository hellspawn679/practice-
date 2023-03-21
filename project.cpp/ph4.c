//date - 30/11/2022
//name - mehul gatuam 
//problem - find the percentage 
//input range- {}
//input = 50 50 50 50 50 
//output = 50 a grade e 
#include <stdio.h>
int main()
{
    int max_marks, bio, chem, math, phy, com;
    // printf("enter the maximum marks in test ");
    // scanf("%d", &max_marks);
    printf("enter the biology marks ");
    scanf("%d", &bio);
    printf("enter the mathematics marks ");
    scanf("%d", &math);
    printf("enter the physic marks ");
    scanf("%d", &phy);
    printf("enter the computer marks ");
    scanf("%d", &com);
    printf("enter the chemistry marks ");
    scanf("%d", &chem);
    // max_marks= 5*max_marks;
 
    int sum = chem + bio + math + phy + com;
    // float perc = sum*100/max_marks;
    float perc = sum*0.2 ;
    printf("your percentage is %f\n", perc);
    if(perc>=90){
            printf("GRADE - A");
               }
    
   else if(perc>=80){
            printf("GRADE - B");
               }
    
   else if(perc>=70){
            printf("GRADE - C");
               }
    
   else if(perc>=60){
            printf("GRADE - D");
               }
    
   else if(perc>=40){
            printf("GRADE - E");
               }
    
   else if(perc<40){
            printf("GRADE - F");
               }
    
    return 0;
}