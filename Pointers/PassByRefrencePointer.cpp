#include<bits/stdc++.h>
using namespace std;
void calc_views(int *inc_views)
{
    *inc_views=*inc_views+1;
}
int main()
{

    int views=10000;
    calc_views(&views);
    cout<<views;
}
