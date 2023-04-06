#include <iostream>
using namespace std;

class shop{
     int id;
     float price;
     public:
          void getData(int a, int b){
               id = a;
               price = b;
          }
          void display(void){
               cout<<"Id :"<<id<<endl;
               cout<<"Price :"<<price<<endl;
          }
};

int main()
{
     shop * p = new shop[2];
     shop * p_temp = p;
     int id,pr;
     for (int i = 0; i < 2; i++)
     {
          cout<<"ID and Price of item "<<i+1<<" ";
          cin>>id>>pr;
          p->getData(id,pr);
          p++;
     }
     for (int i = 0; i < 2; i++)
     {
          cout<<"ID and Price of item "<<i+1;
          p_temp->display();
          p_temp++;
     }
     return 0;
}