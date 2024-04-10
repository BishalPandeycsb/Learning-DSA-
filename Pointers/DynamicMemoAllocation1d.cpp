#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout<<"enter the size of array you want"<<endl;
    cin>>n;

    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=i;
        cout<<arr[i];
    }

    cout<<endl;
    cout<<arr[2]<<endl;
    delete [] arr;

    cout<<arr[2];
}

