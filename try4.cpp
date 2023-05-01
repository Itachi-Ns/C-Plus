#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
    string color, pluralNoun, celebrity;

    cout << "Enter the color: ";
    getline(cin, color);
    cout << "Enter the plural noun: ";
    getline(cin, pluralNoun);
    cout << "Enter the celebrity: ";
    getline(cin, celebrity);

    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    return 0;
}
