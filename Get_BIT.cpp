#include <iostream>
#include <vector>
using namespace std;

int getBIT(int n, int pos){
     return ((n & (1<<pos))!=0);
}

int main()
{
     cout<<getBIT(5,2);
     return 0;
}