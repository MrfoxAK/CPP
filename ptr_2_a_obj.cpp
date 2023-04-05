#include <iostream>
using namespace std;

class Complex{
     int real,imaginary;
     public:
          void setData(int a,int b){
               real = a;
               imaginary = b;
          }
          void display(){
               cout<<"The real part is "<<real<<endl;
               cout<<"The real imaginary is "<<imaginary<<endl;
          }
};

int main()
{
     // Complex c;
     // Complex * ptr = &c;
     Complex * ptr = new Complex;
     // (*ptr).setData(1,2);
     // (*ptr).display();
     ptr->setData(1,2);
     ptr->display();
     Complex * ptr1 = new Complex[3];
     ptr1->setData(1,2);
     ptr1->display();
     return 0;
}