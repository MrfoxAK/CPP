#include <iostream>
using namespace std;

class complex{
     int a,b;
     public:
          void setNum(int n1, int n2){
               a = n1;
               b = n2;
          }
          friend complex sumComplex(complex o1, complex o2);
          void printNum(){
               cout<<"Your Number is "<<a<<" + "<<b<<"i"<<endl;
          }
};

complex sumComplex(complex o1,complex o2){
     complex o3;
     o3.setNum((o1.a+o2.a),(o1.b + o2.b));
     return o3;
}

int main()
{
     complex c1,c2,sum;
     c1.setNum(1,4);
     c2.setNum(5,8);
     c1.printNum();
     c2.printNum();
     sum = sumComplex(c1,c2);
     sum.printNum();
     return 0;
}