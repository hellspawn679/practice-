#include<iostream>
using namespace std;
int binarySearchleft(int arr[], int size, int index)
{
    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;
    int ans=-1;
    while (start <= end)
    {
        if (arr[mid] == index)
        {
           ans=mid;
           start=mid+1;
        }
        else if (arr[mid] < index)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return ans;
}
int binarySearchright(int arr[], int size, int index)
{
    int start = 0;
    int end = size - 1;
    int mid = (start+end)/2;
    int ans=-1;
    while (start <= end)
    {
        if (arr[mid] == index)
        {
           ans=mid;
           end=mid-1;
        }
        else if (arr[mid] < index)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin>>a>>b;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
        }
       cout<<"the right most index is "<<binarySearchright(arr, a, b)<<endl;
       cout<<"the left most index is "<<binarySearchleft(arr,a,b)<<endl;
    }

    return 0;
}