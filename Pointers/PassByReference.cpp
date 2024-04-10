#include<bits/stdc++.h>
using namespace std;
void calc_tax(int &income)
{
    income=income-(income*0.1);
}
int main()
{

    int income=10000;
    calc_tax(income);
    cout<<income;
}
