#include <iostream>
using namespace std;

class Book{                         //The class
    public:                         //Access specifier
        string title;               //Attribute (string variable)
        string author;              //Attribute (string variable)
        int pages;                  //Attribute (int variable)
    };

int main()
{
    Book book1;                     // Creating an object of Book

    //Access attributes and set values

    book1.title = "Harry Potter";
    book1.author = "J.K Rowling";
    book1.pages = 500;

    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.pages << endl;

    cout << endl;

    Book book2;
    book2.title = "Lord of The Rings";
    book2.author = "Tolkein";
    book2.pages = 700;

    cout << book2.title << endl;
    cout << book2.author << endl;
    cout << book2.pages << endl;

    return 0;
}
