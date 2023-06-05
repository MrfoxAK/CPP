#include <iostream>
#include <vector>
using namespace std;

void rev(string s,int len,int i){
     if(i>=len){
          cout<<s;
          return;
     }
     else{
          swap(s[i-1],s[len-1]);
     }
     rev(s,len-1,i+1);
}

int main()
{
     string s = "binod";
     // cout<<s[4];
     rev(s,5,1);
     // cout<<sr<<endl;
     return 0;
}