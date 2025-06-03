// Create a menu-driven program that performs the following using a vector of strings:
// - Add a student name
// - View all student names
// - Delete student name by index
// Use appropriate functions for each operation.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void InsertStudents(vector<string> &students)
{
    string name;
    cin.ignore();
    cout << "Enter Student Name :- ";
    getline(cin,name);

    students.push_back(name);
}

void DisplayStudents(vector<string> &students)
{
    if (students.size() < 0)
    {
        cout << "\n Classroom Is Already Empty." << endl;
    }
    else
    {
        cout << "The Total Students In Class Are :- " << endl;
        for (int i = 0; i < students.size(); i++)
        {
            cout << i+1 << ". " << students[i] << endl;
        }
    }
    
}

void DeleteStudent(vector<string> &students)
{
    int index;
    cout << "Enter Index To Delete Student :- ";
    cin >> index;

    if (index >= 0 && index < students.size())
    {
        students.erase(students.begin()) + index - 1;    
    }
    else
    {
        cout << endl << "Index is Out Of Bond." << endl;
    }
}

int main()
{
    vector<string> students;

    int choice;
    cout << endl << "---- Student Managment System ----" << endl;
    do
    {
        cout << endl << "---- Program's -----" << endl;
        cout << "Press 1 To Insert Student." << endl;
        cout << "Press 2 To Delete Student At Index." << endl;
        cout << "Press 3 To View Students Of Classroom." << endl;
        cout << "Press 0 to Exit." << endl;

        cout << "Enter Your Choice :- ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << endl << "---- Your Exam Is Sucessfully Exited ----" << endl;
            break;
        
        case 1:
            InsertStudents(students);
            break;

        case 2:
            DeleteStudent(students);
            break;
        
        case 3:
            DisplayStudents(students);
            break;

        default:
            cout << endl << "Wrong Choice." << endl;
            break;
        }

    } while (choice != 0);
    
    return 0;
}