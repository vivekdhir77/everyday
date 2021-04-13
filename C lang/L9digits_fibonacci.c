// [LCS4 P2] Fibonacci numbers grow wicked fast :'(
// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
//                                                       1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 
// The thing with Fibonacci numebrs is they grow very fast. See here for the first 100 fibonacci numbers: https://miniwebtool.com/list-of-fibonacci-numbers/?number=100
// The numbers are definitely much larger than 'long long' can handle!
 
// Write a program that takes a positive integer N and outputs the last 9 digits of Nth number in fibonacci sequence.
 
// Example 1
// Input:
// 23
 
// Ouput:
// 28657
 
// Example 2
// Input:
// 230
 
// Output:
// 804836265
#include<stdio.h>
#include<math.h>
#include<string.h>
#define max(a,b) (a>b?a:b)
#define min(a,b) (a>b?b:a)
#define FA(i,start,end) for(int i=start; i<end; i++)
#define FD(i,start,end) for(int i=start; i>=end; i--)
#define li long int
#define ll long long int

const int mod= 1000000000;

int fibonacci(int n)
{
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    FA(i,2,n+1)
    fib[i]= (fib[i-1] % mod + fib[i-2]%mod) % mod;
    return fib[n];
}
 
int main ()
{
    ll n; scanf("%lld", &n);
    printf("%d",fibonacci(n));
    return 0;
}