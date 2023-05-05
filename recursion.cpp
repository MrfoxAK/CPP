#include <iostream>
#include <vector>
using namespace std;

int sum(int n){
     if(n==0)
          return 0;
     return n + sum(n-1);
}

int power(int n,int p){
     if(p==0){
          return 1;
     }
     return n * power(n,p-1);
}

int fib(int n){
     if(n==0 || n==1){
          return n;
     }
     return fib(n-1) + fib(n-2);
}

int main()
{
     // cout<<sum(10)<<endl;
     // cout<<power(4,3);
     cout<<fib(5)<<endl;
     return 0;
}