#include<bits/stdc++.h>
using namespace std;
bool isSort(int arr[],int n)
{
    if(n==0||n==1)
        return true;
    if(arr[0]<arr[1] and isSort(arr+1,n-1))
    {
        return true;
    }
    return false;
}
int main()
{

    int arr[5]={1,2,3,14,5};
    bool ans=isSort(arr,5);
    cout<<"Whether the array is sorted ? :"<<ans<<endl;
}
