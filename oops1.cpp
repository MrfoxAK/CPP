// C++ program to demonstrate accessing of data members
#include <bits/stdc++.h>
using namespace std;

class geeks{
     public:
          string nickname;
          void printname(void){
               cout<<"Geeks name is "<<nickname<<endl;
          }
};

int main()
{
	geeks g1,g2;
     g1.nickname = "Akash Das";
     g2.nickname = "Shubhamay";
     g1.printname();
     g2.printname();
	return 0;
}
