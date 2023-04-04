#include <iostream>
using namespace std;

class A{
     int a;
     public:
          A(int i){
               a = i;
               cout<<"A called"<<endl;
          }
          void printDataa(void){
               cout<<"a is "<<a<<endl;
          }
};

class B{
     int b;
     public:
          B(int i){
               b = i;
               cout<<"B called"<<endl;
          }
          void printDatab(void){
               cout<<"b is "<<b<<endl;
          }
};

class C:public A,public B{
     int c;
     public:
          C(int a,int b,int i):A(a),B(b){
               c = i;
               cout<<"C called"<<endl;
          }
          void printDatac(void){
               cout<<"c is "<<c<<endl;
          }
};

int main()
{
     C c(1,2,4);
     c.printDataa();
     c.printDatab();
     c.printDatac();
     return 0;
}