#include<iostream>
using namespace std;

class Employee
{
private:
     int a,b,c;
public:
     int d,e;
     void setData(int a1,int b1,int c1); //Declearation of func
     void getData(){
          cout<<"a is "<<a<<endl;
          cout<<"b is "<<b<<endl;
          cout<<"c is "<<c<<endl;
          cout<<"d is "<<d<<endl;
          cout<<"e is "<<e<<endl;
     }
};

void Employee :: setData(int a1,int b1, int c1){
     a = a1;
     b = b1;
     c = c1;
}

int main(){
     Employee ak;
     // ak.a = 15;   //a,b,c is a private var so to acess this have to use a Employee class function
     ak.d = 4;
     ak.e = 5;
     ak.setData(1,2,3);
     ak.getData();
     return 0;
}