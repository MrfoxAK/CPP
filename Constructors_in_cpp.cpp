#include <bits/stdc++.h>
using namespace std;

class Complex
{
     int a, b;

public:
     Complex(void);
     void printNum()
     {
          cout << "Your Number is " << a << " + " << b << "i" << endl;
     }
};

Complex::Complex(void)
{
     a = 10;
     b = 11;
}

class student
{
private:
     int rno;
     char name[10];
     double fee;

public:
     student();
     void display()
     {
          cout << endl << rno << "\t" << name << "\t" << fee;
     }
};

student::student()
{
     cout << "Enter the Roll no: ";
     cin >> rno;
     cout << "Enter the Name: ";
     cin >> name;
     cout << "Enter the Fee: ";
     cin >> fee;
}

int main()
{
     Complex c;
     c.printNum();
     student s;
     s.display();
     return 0;
}
