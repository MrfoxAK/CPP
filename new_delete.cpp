#include <iostream>
using namespace std;



int main()
{
     int a = 4;
     int * p = &a;
     cout<<"The value is "<<*(p)<<endl;
     int *ptr = new int(40);
     float *pt = new float(40.80);
     cout<<"The value is "<<*(ptr)<<endl;
     cout<<"The value is "<<*(pt)<<endl;
     int * arr = new int[4];
     arr[0] = 10;
     *(arr+1) = 20;
     arr[2] = 30;
     arr[3] = 40;
     // delete[] arr;
     cout<<"arr[3] : "<<arr[3];
     return 0;

}