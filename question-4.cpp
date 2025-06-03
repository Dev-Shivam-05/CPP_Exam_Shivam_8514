// Create a base class Shape. Derive two classes:
// - Circle – to calculate area of a circle
// - Rectangle – to calculate area of a rectangle
// Use hierarchical inheritance and call appropriate area functions.

#include<iostream>

#define PIE 3.14
using namespace std;

class Shape 
{
public:
    float area;
};

class Circle : public Shape
{
public:
    double radii;
    void setradii()
    {
        cout << "Enter the Radius Of Circle :- ";
        cin >> radii;
    }

    void getareaOfCircle()
    {
        area = PIE * radii * radii;
        cout << endl << "If The Radius Of Circle Is " << radii << "." <<endl << "Then The Area Of Circle Will Be :- " << area;
    }
};

class Rectangle : public Shape
{
public:
    int length,breath;
    void setlengthbreath()
    {
        cout << "Enter the Length of Rectangle :- ";
        cin >> length;

        cout << "Enter the Breath of Rectangle :- ";
        cin >> breath;
    }

    void getareaOfRectangle()
    {
        area = length * breath;
        cout << "If The Length And Breath Of The Rectangle Is " << length << " And " << breath << " Respectively. " << endl <<"Then the Area of Rectangle Will be :- " << area << endl;
    }
};

int main()
{
    cout << endl << "-------- Circle -------- "<< endl;
    Circle obj_1;
    obj_1.setradii();
    obj_1.getareaOfCircle();
    cout << endl << "------------------------";
    
    cout << endl;

    cout << endl << "-------- Rectangle --------"<< endl;
    Rectangle obj_2;
    obj_2.setlengthbreath();
    obj_2.getareaOfRectangle();
    cout << endl << "------------------------";

    return 0;
}