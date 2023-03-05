#include<iostream>

using namespace std;

int main()
{
     // int a,b;
     // cout<<"Enter a: ";
     // cin>>a;
     // cout<<"a is "<<a;
     float a = 34.4;
     long double e = 34.4;
     cout<<"a is "<<a<<endl<<"e is "<<e<<endl;

     //-----------reference variable----------
     float var = 455;
     float & y = var;
     cout<<var<<endl;
     cout<<y<<endl;
     float b = 15.67;
     cout<<int(b);
     return 0;
}