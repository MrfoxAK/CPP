#include <iostream>
using namespace std;

class Number{
     int a;
     public:
          Number(){}
          Number(int n){
               a = n;
          }

          Number(Number &obj){
               cout<<"Copy c called"<<endl;
               a = obj.a;
          }

          void display(){
               cout<<"The num is "<<a<<endl;
          }
};

int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}
