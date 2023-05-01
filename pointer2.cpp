#include <iostream>
using namespace std;

int main ()
{
    int age = 19;
    int *pAge = &age;
    double gpa = 3.4;
    double *pGpa = &gpa;
    string name = "Luffy";
    string *pName = &name;

    cout << pAge << endl;
    cout << *pAge << endl;      // To dereference the function we put *
    cout << &gpa << endl;
    cout << *&gpa << endl;

    return 0;
}

