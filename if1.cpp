#include <iostream>

using namespace std;

int main ()
{
    bool isMale = false;
    bool isTall = false;

    if(isMale && isTall)                         // AND=&&  OR=||
    {
        cout << "You are a tall male";
    }
    else if(isMale && !isTall)                   // Negation operator ---> !
    {
        cout << "You are a short male";
    }
    else if(!isMale && isTall)
    {
        cout << "You are a tall female";
    }
    else
    {
        cout << "You are short female";
    }

    return 0;
}
