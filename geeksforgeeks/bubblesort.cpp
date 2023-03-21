#include<iostream>
using namespace std;
int main()
{
    int a[]={2,9,1,7,3,8,2,0};
    int n=sizeof(a)/sizeof(int);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>a[i]){
                int temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
    }

    return 0;
}