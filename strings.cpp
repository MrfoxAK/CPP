#include <iostream>
using namespace std;

string returnFloatingPart(string str)
{
     int pos = str.find(".");
     if (pos == string::npos)
     {
          return "";
     }
     else
     {
          return str.substr(pos + 1);
     }
}

bool containOnlyDigit(string str)
{
     for (int i = 0; i < str.length(); i++)
     {
          if (str.at(i) < '0' || str.at(i) > '9')
          {
               return false;
          }
     }
     return true;
}

string replaceBlankWith20(string str)
{
     string replaceby = "%20";
     int n = 0;

     // loop till all space are replaced
     while ((n = str.find(" ", n)) != string::npos)
     {
          str.replace(n, 1, replaceby);
          n += replaceby.length();
     }
     return str;
}

int main()
{
     // string str1("AKash Das");
     // string str2(str1);
     // string str3(5,'#');
     // string str4(str1,6,6);
     // str4.clear();
     // int len = str3.length();
     // // cout << str1 << endl;
     // // cout << str3 << endl;
     // // cout << str4 << endl;
     // // cout << len << endl;
     // // cout << str5 << endl;
     // char c = str2.at(0);
     // cout<<"C is "<<c<<endl;
     // str2.append(" WOW");
     // cout << str2 << endl;
     // str2.append(str1,4,7);
     // cout << str2 << endl;
     // cout << str2.substr(2, 6) << endl;
     // str2.erase(10, 4);
     // cout << str2 << endl;
     string s = "19.22";
     cout << "Floating part is " << returnFloatingPart(s) << endl;
     string num = "3452";
     if (containOnlyDigit(num))
          cout << "string contains only digit" << endl;
     string urlex = "google com in";
     cout << replaceBlankWith20(urlex) << endl;
     return 0;
}