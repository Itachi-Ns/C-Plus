#include <iostream>

using namespace std;

int main()
{
    int index = 6;
    do{                         //do while loop is basically while loop but the function is executed before checking the condition.
        cout << index << endl;
        index ++;
    }while(index <= 5);

    return 0;
}

