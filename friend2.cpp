#include <bits/stdc++.h>
using namespace std;

class c2;

class c1{
     int val;
     public:
          void setdata(int a){
               val = a;
          }
          void display(void){
               cout<<val<<endl;
          }
     friend void exchange(c1 &, c2 &);
};

class c2{
     int val2;
     public:
          void setdata(int a){
               val2 = a;
          }
          void display(void){
               cout<<val2<<endl;
          }
     friend void exchange(c1 &, c2 &);
};

void exchange(c1 & x, c2 & y){
     int temp = x.val;
     x.val = y.val2;
     y.val2 = temp;
}

int main()
{
	c1 obj1;
     c2 obj2;
     obj1.setdata(234);
     obj2.setdata(56);
     obj1.display();
     obj2.display();
     exchange(obj1,obj2);
     cout<<"After swapping"<<endl;
     obj1.display();
     obj2.display();
	return 0;
}
