#include <iostream>
using namespace std;

int main ()
{
    int age = 19;
    double gpa = 3.4;
    string name = "Luffy";

    cout << "Age: " << &age << endl;        // Pointers are simply memory address of temporarily stored values
    cout << "GPA: " << &gpa << endl;
    cout << "Name: " << &name << endl;

    return 0;
}
