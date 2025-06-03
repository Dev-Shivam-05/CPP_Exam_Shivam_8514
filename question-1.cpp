// Create a class Student to store 5 student names using an array. Create a derived class
// Display that will show all student names using single inheritance.

#include<iostream>
#include<string>
using namespace std;

class Student 
{
public:
    string std_name[5];

    void setStudents()
    {
        cout << "Enter 5 Students Name :- " << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter Student Name Of Number " << i + 1 <<"th :- ";
            getline(cin , std_name[i]);
        }
    }
};

class Class : public Student
{
public:
    void getStudent()
    {
        cout << endl << "The Classroom Contains Students Are :- " << endl << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << i + 1 << "th Student Name Is :- " << std_name[i] << endl;
        }
    }

};


int main()
{
    Class obj;

    obj.setStudents();
    obj.getStudent();
    
    return 0;
}