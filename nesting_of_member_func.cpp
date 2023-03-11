#include<iostream>
#include<string>
using namespace std;

class binary
{
// private: // by defult it's private
     string s;
public:
     void read(void);
     void check_bn(void);
     void ones(void);
     void display(void);
};

void binary :: read(void){
     cout<<"Enter a binary num: "<<endl;
     cin>>s;
}

void binary :: check_bn(void){
     for (int i = 0; i < s.length(); i++)
     {
          if (s.at(i)!='0' && s.at(i)!='1')
          {
               cout<<"Incorrect BN"<<endl;
               exit(0);
          }
     }
}

void binary::ones(void){
     check_bn();
     for (int i = 0; i < s.length(); i++)
     {
          if (s.at(i)=='0')
          {
               s.at(i) = '1';
          }
          else if (s.at(i)=='1')
          {
               s.at(i) = '0';
          }
     }
}

void binary::display(void){
     for (int i = 0; i < s.length(); i++)
     {
          cout<< s.at(i);
     }
}

int main(){
     binary b;
     b.read();
     // b.check_bn();
     b.ones();
     b.display();
     return 0;
}