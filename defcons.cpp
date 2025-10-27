#include<iostream>
using namespace std;
class student
{
    int rollno;
    string name;
    public:
    student()
    {
        rollno=01;
        name="Gireesh";
    }
   void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll No:"<<rollno;
    }
};
int main()
{
    student s1;
    s1.display();
    return 0;
}