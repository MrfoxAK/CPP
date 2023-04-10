#include <iostream>
using namespace std;

class BaseClass
{
public:
     int var_base;
     void display()
     {
          cout << "Dispalying Base class variable var_base " << var_base << endl;
     }
};

class DerivedClass : public BaseClass
{
public:
     int var_derived;
     void display()
     {
          cout << "Dispalying Base class variable var_base " << var_base << endl;
          cout << "Dispalying Derived class variable var_derived " << var_derived << endl;
     }
};

int main()
{
     BaseClass *ptr_bc;
     BaseClass obj_bc;
     BaseClass obj_dc;
     ptr_bc = &obj_dc; // pointing base class pointer to derived class
     ptr_bc->var_base = 34;
     // ptr_bc->var_derived = 34;
     cout << "Var_base is " << ptr_bc->var_base << endl;
     ptr_bc->display();
     DerivedClass *ptr_dc;
     DerivedClass obj2_dc;
     ptr_dc = &obj2_dc;
     ptr_dc->var_derived = 25;
     ptr_dc->var_base = 2;
     ptr_dc->display();
     return 0;
}