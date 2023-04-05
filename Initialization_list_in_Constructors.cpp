#include <iostream>
using namespace std;

class Test
{
    int a;
    int b;

public:
//     Test(int i, int j) : a(i), b(j+a)
//     Test(int i, int j) : a(i+a), b(j) create problems as b will initilized after
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed"<<endl;
        cout << "Value of a is "<<a<<endl;
        cout << "Value of b is "<<b<<endl;
    }
};

int main()
{
    Test t(4, 6);

    return 0;
}