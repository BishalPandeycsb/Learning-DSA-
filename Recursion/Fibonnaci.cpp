   #include<bits/stdc++.h>
   using namespace std;
   int fib(int num)
   {

       if(num==1||num==0)
       {
           return num;
       }
       int n1=fib(num-1);
       int n2=fib(num-2);
       return n1+n2;
   }
   int main()
   {
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    int x=fib(num);
    cout<<"the fibonacci number  at "<<num<<" is :"<<x<<endl;
   }
