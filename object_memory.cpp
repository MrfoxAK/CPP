#include<iostream>
#include<string>
using namespace std;

class Shop
{
public:
     int counter=0;
     int itemID[100];
     int itemPrice[100];
     void initCounter(void){counter = 0;}
     void setPrice(void);
     void displayPrice(void);
};

void Shop::setPrice(void){
     cout<<"Enter the ID: "<<endl;
     cin>>itemID[counter];
     cout<<"Enter the Price: "<<endl;
     cin>>itemPrice[counter];
     counter++;
}

void Shop::displayPrice(void){
     for (int i = 0; i < counter; i++)
     {
          cout<<"The Price of the "<<itemID[i]<<" is "<<itemPrice[i]<<endl;
     }
}

int main(){
     Shop dukaan;
     dukaan.initCounter();
     dukaan.setPrice();
     dukaan.setPrice();
     // dukaan.setPrice();
     // dukaan.setPrice();
     dukaan.displayPrice();
     return 0;
}