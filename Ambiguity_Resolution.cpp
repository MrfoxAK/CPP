#include <iostream>
using namespace std;

class Base1{
     public:
     void greet(){
          cout<<"How are u?"<<endl;
     }
};

class Base2{
     public:
     void greet(){
          cout<<"good morning"<<endl;
     }
};

class Derived: public Base1 , public Base2{
     int a;
     public:
     public:
     void greet(){
          Base1::greet();
     }
};

class B{
     public:
     void say(){
          cout<<"Hello!"<<endl;
     }
};

class A:public B{
     int a;
     public:
     // void say(){
     //      cout<<"Hello World!"<<endl;
     // }
};

int main()
{
     // Ambiguity 1
     // Base1 obj1;
     // Base2 obj2;
     // // obj1.greet();
     // // obj2.greet();
     // Derived d;
     // d.greet();



     // Ambiguity 2
     B b;
     b.say();
     A a;
     a.say();
     return 0;
}