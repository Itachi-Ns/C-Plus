#include <iostream>
using namespace std;

int main()
{
    int secretNum=6;
    int guess;

    do{
        cout << "Enter your guess: ";
        cin >> guess;
    }while(guess = !secretNum);

    cout << "You Win!";

    return;
}
