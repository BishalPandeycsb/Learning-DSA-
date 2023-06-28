#include<bits/stdc++.h>
using namespace std;
int lastOccur(int arr[],int n,int key)
{

    if(n==0)
        return -1;

    int subIndex=lastOccur(arr+1,n-1,key);
    if(subIndex==-1)
    {
        if(arr[0]==key)
        {

            return 0;
        }
        else
        {

            return -1;
        }
    }
    else
    {
        return subIndex+1;
    }
}
int main()
{

    int arr[]={1,3,5,8,7,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"the key is 3"<<endl;
    int key=3,x;
    x=lastOccur(arr,n,key);
    cout<<"it's found at index :"<<x<<endl;
}
