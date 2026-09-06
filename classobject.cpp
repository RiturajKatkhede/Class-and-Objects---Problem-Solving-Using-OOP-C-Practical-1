#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        marks = 0;
        cout << "Constructor called." << endl;
    }

    
    void getData()
    {
        cout << "\nEnter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    
    void displayData()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    
    void checkResult()
    {
        if (marks >= 40)
            cout << "Result: PASS" << endl;
        else
            cout << "Result: FAIL" << endl;
    }

    
    ~Student()
    {
        cout << "\nDestructor called. Object destroyed." << endl;
    }
};

int main()
{
    
    Student s;

    
    s.getData();
    s.displayData();
    s.checkResult();

    return 0;
}