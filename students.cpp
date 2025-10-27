#include<iostream>
using namespace std;
class student
{
    int rollno;
    string name;
    public:
    student(int x,string y)
    {
        rollno=x;
        name=y;
    }
    void display()
    {
        cout<<"Name:"<<name<<"\nRoll No:"<<rollno;
    }
};
int main()
{
    student s1(100,"Arjun");
    student s2(101,"Meena");
    s1.display();
    s2.display();
    return 0;
}