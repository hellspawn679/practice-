#include<iostream>
using namespace std;
void swap(){

}
int min(int arr[], int a){
  int j=arr[0];
  int k;
  for (int  i = 0; i < a; i++)
  {     if(j>arr[i]){
         j=arr[i];
         k=i; 
         }
   }
  return j;
}
int main()
{
    int a;
    
    cin>>a;
    int arr[a];
    for(int  i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
   cout<<min(arr,a);
    return 0;
}