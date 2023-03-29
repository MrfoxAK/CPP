#include <bits/stdc++.h>
using namespace std;

class Complex
{
     int a, b;

public:
     Complex()
     {
          a = 0;
          b = 0;
     }
     Complex(int x, int y)
     {
          a = x;
          b = y;
     }
     Complex(int x)
     {
          a = x;
          b = 0;
     }
     void printNum()
     {
          cout << "Your Number is " << a << " + " << b << "i" << endl;
     }
};

int main()
{
     Complex c1(4, 8);
     Complex c2(4);
     Complex c3;
     c1.printNum();
     c2.printNum();
     c3.printNum();
     return 0;
}