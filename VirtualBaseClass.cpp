#include <iostream>
using namespace std;

/* Inheritance flowchart for this example
Student --> Test
Student --> Sports
Test --> Results
Sports --> Results
*/

class Student
{
    protected:
        int roll_number;
    public:
        void set_number(int a)
        {
            roll_number = a;
        }

        void print_number(void)
        {
            cout<<"Your roll number is "<<roll_number<<endl;
        }
};


class Test: virtual public Student
{
    protected:
        float maths, physics;
    public:
        void set_marks(float m1, float m2)
        {
            maths = m1;
            physics = m2;
        }

        void print_marks(void)
        {
            cout<<"Your results are here: "<<endl<<"Maths: "<<maths<<endl<<"Physics: "<<physics<<endl;
        }
};


class Sports : virtual public Student
{
    protected:
        float score;
    public:
        void set_score(float sc)
        {
            score = sc;
        }

        void print_score(void)
        {
            cout<<"Your PT score is: "<<score<<endl;
        }
};


class Result : public Test, public Sports
{
    private:
        float total;
    public:
        void display(void)
        {
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<<"Your total score is: "<<total<<endl;

        }
};


int main()
{
    Result harry;
    harry.set_number(4200);
    harry.set_marks(78.9, 98.6);
    harry.set_score(9);
    harry.display();
    return 0;
}

