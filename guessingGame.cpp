#include <iostream>

using namespace std;

int main()
{
    int secretNum=7;
    int guess;
    int guessCount=0;
    int guessLimit=3;
    bool outOfGuess=false;

    cout << "Guess the secret number. Hint: It's within 0-10. You have 3 tries." << endl << endl;

    while(guess != secretNum && !outOfGuess){
        if(guessCount < guessLimit){
            cout << "Enter your guess: ";
            cin >> guess;
            if(secretNum > guess){
                cout << "You guessed lower" << endl << endl;
            }
            else if(secretNum < guess){
                cout << "You guessed higher" << endl << endl;
            }
            guessCount++;
        } else {
            outOfGuess=true;
        }
    }

    if(outOfGuess){
        cout << "You Lose!" << endl << endl;
    }else{
        cout << "You Win!" << endl << endl;
        cout << "You guessed correctly in " << guessCount << " tries" << endl;
    }



    return 0;
}
