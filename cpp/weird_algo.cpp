//https://cses.fi/problemset/task/1068
#include <iostream>
int main()
{
    int n;
    std::cin >> n;
    std::cout<<n;
    bool x=true;
    while(x)
    {
        if (n%2==0)
        {
            n=n/2;
            std::cout<<" "<<n;
        }

        else if (n%2!=0)
        {
           n=n*3+1;
           std::cout<<" "<<n;
        }
        if (n==1)
        {
            x=false;
        }
    }
    

}
