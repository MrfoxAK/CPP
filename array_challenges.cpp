// #include <iostream>
// using namespace std;

// int main()
// {
//      int arr[5];
//      int n=5;
//      int mx=-1999999;
//      for (int i = 0; i < n; i++)
//      {
//           cout<<"Enter element at "<<i<<" ";
//           cin>>arr[i];
//      }
//      for (int i = 0; i < n; i++)
//      {
//           mx = max(mx, arr[i]);
//      }
//      cout<<"The max is "<<mx<<endl;
//      return 0;
// }



// SubArray & Subsequence
// NO.of subarray is nc2+n
// NO.of subsequence is 2^n


// // sum of every subarray in an array
// #include <iostream>
// using namespace std;

// int main()
// {
//      int arr[5];
//      int n=5;
//      int sum=0;
//      int mx=-1999999;
//      for (int i = 0; i < n; i++)
//      {
//           cout<<"Enter element at "<<i<<" ";
//           cin>>arr[i];
//      }
//      for (int i = 0; i < n; i++)
//      {
//           sum=0;
//           for (int j = i; j < n; j++)
//           {
//                sum+=arr[j];
//                cout<<"The sum is "<<sum<<endl;
//           }
//      }
//      return 0;
// }


// Longest Arithmetic Subarray - Kickstart
#include <iostream>
using namespace std;

int main()
{
     int arr[5];
     int carray[5];
     int j=0;
     int c=0;
     int n=7;
     int sum=0;
     int mx=-1999999;
     for (int i = 0; i < n; i++)
     {
          cout<<"Enter element at "<<i<<" ";
          cin>>arr[i];
     }
     int dif=arr[1]-arr[0];
     for (int i = 0; i < n;)
     {
          if(arr[i+1]-arr[i] == dif){
               c++;
               i++;
          }
          else{
               carray[j] = c;
               j++;
               c=0;
               dif = arr[i+1]-arr[i];
          }
     }
     int max=0;
     for (int i = 0; i < j; i++)
     {
          if(carray[i]>max){
               max=carray[i];
          }
     }
     cout<<"The Longest Arithmetic Subarray is "<<max+1<<endl;
     return 0;
}