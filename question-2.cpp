// Create a multilevel inheritance structure with:
// - Class 1: Student – to input student name
// - Class 2: Marks – to input marks of 3 subjects using array
// - Class 3: Result – to calculate and display total and percentage.

#include<iostream>
#include<string>
using namespace std;

class Students
{
public:
    string std_name;
    
    void setStudents()
    {
        cout << "Enter Student name :- ";
        getline(cin , std_name);
    }
};

class Marks : public Students
{
public:
    double std_marks[3];
    void setMarks()
    {
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter "<< i + 1 <<" th Subject Marks :- ";
            cin >> std_marks[i];
        }
    }
};

class Result : public Marks
{
public:
    double percentage,total_marks = 0;
    void getResult()
    {
        for (int i = 0; i < 3; i++)
        {
            total_marks += std_marks[i];
        }
        percentage = total_marks / 3;

        cout << "The Result Of " << std_name << " Is :- " << endl;
        cout << endl << "Total Marks Scored :- " << total_marks << endl;
        cout << "Total Percentage Scored :- " << percentage << endl;
    }
   
};


int main()
{
    Result obj;

    obj.setStudents();
    obj.setMarks();
    obj.getResult();
    return 0;
}