//Fibonacci Series using Recursion
#include<iostream>
using namespace std;
int fib(int n)
{
   if (n >= 1)
      return n*fib(n-1);
   else
      return 1;

}

int main ()
{
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}
