#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
     string str = "AKASH";

     // cin>>str;
     // cout<<str;

     // string str1(5, 'n');
     // cout<<str1;

     // cout<<str;

     // string str2;
     // getline(cin,str2);

     // cout<<str2;
     // cout<<str[2];

     str.clear();


     // ---------Important---------

     // ---------Erase--------
     string s = "Akashdas25";

     s.erase(5,3);

     cout<<s<<endl;


     // ---------Find--------

     cout<<s.find("25")<<endl;


     // ---------Insert--------

     s.insert(5,"das");

     cout<<s<<endl;


     // ---------Substr--------

     string subs = s.substr(5,3);

     cout<<subs<<endl;

     // ******************Important****************
     
     // -------Str to int-------
     
     string str10 = "1234";

     int x = stoi(str10);

     cout<<x<<endl;


     // -------Str to int-------

     int x1 = 1234;

     string sa = to_string(x1);

     cout<<sa+"5"<<endl;


     string a = "zzabfdsh";

     sort(a.begin(),a.end());

     cout<<a<<endl;

     return 0;
}