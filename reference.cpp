// C++ Program to demonstrate
// use of references
#include <iostream>
using namespace std;

void swap(int &first, int &second)
{
     int temp = first;
     first = second;
     second = temp;
}

int main()
{
     int x = 10;
     int &ref = x;
     x = 20;
     cout << x << endl;
     cout << ref << endl;
     int a = 2, b = 3;

     // function called
     swap(a, b);

     // changes can be seen
     // printing both variables
     cout << a << " " << b;
     return 0;
}
