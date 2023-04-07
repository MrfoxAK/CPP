#include <iostream>
using namespace std;

class A{
     int a;
     public:
     void setData(int a){
          this->a=a;
     }
     void getData(void){
          cout<<"a is "<<a<<endl;
     }
};

int main()
{
     A s;
     s.setData(4);
     s.getData();
     return 0;
}
// #include <iostream>
// using namespace std;

// class A{
//      int a;
//      public:
//      // void setData(int a){
//      //      this->a=a;
//      // }
//      A & setData(int a){
//           this->a=a;
//           return *this;
//      }
//      void getData(void){
//           cout<<"a is "<<a<<endl;
//      }
// };

// int main()
// {
//      A s;
//      s.setData(4).getData();
//      // s.getData();
//      return 0;
// }