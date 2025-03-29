#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}
    virtual void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : virtual public Person {
protected:
    int rollNumber;
    string branch;
    float marks;

public:
    Student(string n, int a, int r, string b, float m)
        : Person(n, a), rollNumber(r), branch(b), marks(m) {}

    float calculateCGPA() {
        return marks / 10.0;  
    }

    void display() override {
        Person::display();
        cout << "Roll Number: " << rollNumber << ", Branch: " << branch
             << ", CGPA: " << calculateCGPA() << endl;
    }

    friend class Administration; 
};

class Faculty : virtual public Person {
protected:
    int facultyID;
    string department;
    float salary;

public:
    Faculty(string n, int a, int f, string d, float s)
        : Person(n, a), facultyID(f), department(d), salary(s) {}

    void display() override {
        Person::display();
        cout << "Faculty ID: " << facultyID << ", Department: " << department
             << ", Salary: " << salary << endl;
    }

    friend class Administration; 
};

class TeachingAssistant : public Student, public Faculty {
public:
    TeachingAssistant(string n, int a, int r, string b, float m,
                       int f, string d, float s)
        : Person(n, a), Student(n, a, r, b, m), Faculty(n, a, f, d, s) {}

    void display() override {
        Student::display();
        cout << "Faculty ID: " << Faculty::facultyID << ", Department: " << Faculty::department
             << ", Salary: " << Faculty::salary << endl;
    }
};

class Administration {
public:
    void accessDetails(Student &stu, Faculty &fac) {
        cout << "Accessing Private Details from Administration:\n";
        cout << "Student Roll Number: " << stu.rollNumber << ", Branch: " << stu.branch << endl;
        cout << "Faculty ID: " << fac.facultyID << ", Department: " << fac.department << endl;
    }
};

int main() {
    string name, branch, department;
    int age, rollNumber, facultyID;
    float marks, salary;

    cout << "Enter Student Details:\n";
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Roll Number: ";
    cin >> rollNumber;
    cout << "Branch: ";
    cin >> branch;
    cout << "Marks: ";
    cin >> marks;
    Student s(name, age, rollNumber, branch, marks);

    cout << "\nEnter Faculty Details:\n";
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Faculty ID: ";
    cin >> facultyID;
    cout << "Department: ";
    cin >> department;
    cout << "Salary: ";
    cin >> salary;
    Faculty f(name, age, facultyID, department, salary);

    cout << "\nEnter Teaching Assistant Details:\n";
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Roll Number: ";
    cin >> rollNumber;
    cout << "Branch: ";
    cin >> branch;
    cout << "Marks: ";
    cin >> marks;
    cout << "Faculty ID: ";
    cin >> facultyID;
    cout << "Department: ";
    cin >> department;
    cout << "Salary: ";
    cin >> salary;
    TeachingAssistant ta(name, age, rollNumber, branch, marks, facultyID, department, salary);

    cout << "\nStudent Details:\n";
    s.display();
    
    cout << "\nFaculty Details:\n";
    f.display();

    cout << "\nTeaching Assistant Details:\n";
    ta.display();

    Administration admin;
    cout << "\nAccessing Private Details via Friend Function:\n";
    admin.accessDetails(s, f);

    return 0;
}
