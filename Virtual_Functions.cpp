// record breaking day - Kickstart
#include <iostream>
#include <cstring>
using namespace std;

class CWH{
     protected:
          string title;
          float rating;
     public:
          CWH(string s, float r){
               title = s;
               rating = r;
          }
          virtual void display(){cout<<"HY"<<endl;}
};

class CWHVideo: public CWH{
     int videoLength;
     public:
          CWHVideo(string s, float r,int vl) : CWH(s,r){
               videoLength = vl;
          }
          void display(){
               cout<<"This is  a vd titeled "<<title<<endl;
               cout<<"Rating "<<rating<<endl;
               cout<<"Length is "<<videoLength<<endl;
          }
};

class CWHText: public CWH{
     int words;
     public:
          CWHText(string s, float r,int wc) : CWH(s,r){
               words = wc;
          }
          void display(){
               cout<<"Text "<<words<<endl;
               cout<<"This is a vd titeled "<<title<<endl;
               cout<<"Rating "<<rating<<endl;
          }
};

int main()
{
     string title = new char[20];
     float rating,vlength;
     int words;
     title = "AK";
     vlength = 4.56;
     rating = 4.89;
     // words = 100;
     CWHVideo djvd(title,rating,vlength);

     title = "AK txt";
     // vlength = 4.00;
     rating = 4.81;
     words = 10;
     CWHText djtxt(title,rating,words);
     djtxt.display();
     CWH * tuts[2];
     tuts[0] = &djvd;
     tuts[1] = &djtxt;
     tuts[0]->display();
     tuts[1]->display();
     return 0;
}