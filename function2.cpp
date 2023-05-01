#include <iostream>

using namespace std;

void sayHi(string name, int age)            //never create void function below main function or c++ wont recognise it
{
    cout << "Hello " << name << ". You are " << age << " years old." << endl;
}

int main()
{
    sayHi("Nirbhik", 19);
    sayHi("Sindhuja", 19);
    sayHi("Sanket", 19);
    sayHi("Samikshya",18);

    return 0;
}

/* You can however put void function below the main function if you declare the void function before.
Example:
    void sayHi(string name, int age)

    int main()
    {
        sayHi("Nirbhik", 19);

        return 0;
    }

    void sayHi(string name, int age)
    {
        cout << "Hello " << name << ". You are " << age << " years old." << endl;
    }
*/
