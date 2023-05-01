#include <iostream>
using namespace std;

int main()
{
    int numberGrid[3][2]={              //First [] means no of elements in main array and second [] means elements in inside array
                         {1, 2},
                         {3, 4},
                         {5, 6}
                        };
    cout << numberGrid[0][1] << endl;           //First [] means index of element in main array and second [] means index in inside array
    cout << numberGrid[2][0] << endl;
    return 0;
}
