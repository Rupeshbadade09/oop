#include<iostream>
using namespace std;

class Student
{
public:
    void getStudent()
    {
        cout<<"Student details" << endl;
    }

};

class Result : public Student
{
public: 
    void displayResult()
    {
        cout<<"Result : Pass" <<endl;
    }
};

int main()
{
    Result r;

    r.getStudent();
    r.displayResult();
    return 0;
    
}