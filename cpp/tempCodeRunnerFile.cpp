//https://www.codechef.com/problems/CIELAB
#include<iostream>
#include<cmath>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define li long int
#define ll long long int

using namespace std;

int main()
{
    ll a,b;
    cin>>a>>b;
    int diff=0;
    diff= max(a,b) - min(a,b);
    if (diff !=0)
    diff-=1;
    cout<<diff;
}