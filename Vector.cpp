#include <iostream>
#include <vector>
using namespace std;

int main()
{
     vector <string> s;
     s.push_back("Ak");
     s.push_back("S");
     s.push_back("SG");
     // for(vector<string>::iterator i=s.begin();i!=s.end();i++)
     // cout<<*i<<" ";
     vector <int> v{1,2,3,4};
     v.push_back(5);
     for (int i = 0; i < v.size(); i++)
     {
          cout<<v[i]<<" ";
     }
     
     return 0;
}