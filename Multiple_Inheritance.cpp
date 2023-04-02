#include <iostream>
using namespace std;

// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };

class Student
{
protected:
     int roll_no;

public:
     void set_roll_no(int);
     void get_roll_no(void);
};

void Student::set_roll_no(int r)
{
     roll_no = r;
}

void Student::get_roll_no(void)
{
     cout << "The Roll no is: " << roll_no << endl;
}

class Exam
{
protected:
     float maths;
     float physics;

public:
     void set_marks(float, float);
     void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
{
     maths = m1;
     physics = m2;
}

void Exam::get_marks(void)
{
     cout << "Math: " << maths << endl;
     cout << "physics: " << physics << endl;
}

class Result : public Student, public Exam
{
     float per;

public:
     void display(void);
};

void Result::display()
{
     cout << "math : " << maths << " physics : " << physics << " Roll no " << roll_no << endl;
}

int main()
{
     Result ak;
     ak.set_marks(11, 235);
     ak.set_roll_no(1);
     ak.display();
     return 0;
}