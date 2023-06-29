#include<bits/stdc++.h>
using namespace std;
int power(int a, int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        int sub=power(a,n/2);
        int fsub=sub*sub;

        if(n&1)
        {
            return a*fsub;
        }
        else
        {
            return fsub;
        }
    }
}
int main()
{
    cout<<"Enter the base and exponent term"<<endl;
    int a,n,ans;
    cin>>a>>n;
    ans=power(a,n);
    cout<<"so the power of the number"<<a<<"is :"<<ans;

}
