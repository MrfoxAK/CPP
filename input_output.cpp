#include<iostream>
#include<string>
using namespace std;

int main(){
     string my_color;
     cout << "enter your fav color: \n";
     getline(cin,my_color);
     cout << "Hey " << my_color << " is my fav too";
     return 0;
}