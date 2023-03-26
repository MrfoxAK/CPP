#include <bits/stdc++.h>
using namespace std;

class Complex
{
     int a, b;

public:
     Complex(int,int);
     void printNum()
     {
          cout << "Your Number is " << a << " + " << b << "i" << endl;
     }
};

Complex::Complex(int x, int y)
{
     a = x;
     b = y;
}

class point{
     int x,y;
     public:
     friend void add_x_point(point, point);
          point(int a, int b){
               x=a;
               y=b;
          }
          void displaypoint(){
               cout<<"Point is ("<<x<<","<<y<<")"<<endl;
          }
};

void add_x_point(point o1, point o2){
     int dis=0;
     dis = o1.x + o2.x;
     cout<<dis;
}

int main()
{
     // Implicit call
     point p(1,1);
     p.displaypoint();
     point q(4,1);
     q.displaypoint();
     add_x_point(p,q);
     return 0;
}