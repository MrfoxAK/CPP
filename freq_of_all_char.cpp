#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
     int freq[26];
     string s = "adivhieugfada";
     for (int i = 0; i < 26; i++)
     {
          freq[i] = 0;
     }
     for (int i = 0; i < s.length(); i++)
     {
          freq[int(s[i])-97]++;
     }
     cout<<"Freq of all char: ";
     for (int i = 0; i < 26; i++)
     {
          cout<<freq[i]<<" ";
     }
     return 0;
}