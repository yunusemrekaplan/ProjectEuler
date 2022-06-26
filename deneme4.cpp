#include <iostream> 
#include <sstream>
#include <cstring>
#include <map>
#include <string>


using namespace std;

class Student {
    public:
        int age;
        string name;
        string departmant;
        void callStudent() {
            cout << "Age of the student: " << age << endl;
            cout << "Name of the student: " << name << endl;
            cout << "Departmant of the student: " << departmant << endl;
        }
};

class Employee {
    private:
        string name;
        string age;
        int salary;
    public:
        void setName(string name1) {
            name = name1;
        }
        string getName() {
            return name;
        }
};

int main() {
/*
    Student student1;
    cout << "Age: ";
    cin >> student1.age;
    cout << "Name: ";
    cin >> student1.name;
    cout << "Departmant: ";
    cin >> student1.departmant;
    cout << endl;
    student1.callStudent();
*/
    Employee employee1; 
    char a[50];
    cout << "Please enter the employee name: ";
    gets(a);
    employee1.setName(a);
    cout << employee1.getName() << endl;



    return 0;
}