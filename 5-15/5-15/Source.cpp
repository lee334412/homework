#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(nullptr));

    int actualPIN = 12345;

    int randomNumbers[10];
    for (int i = 0; i < 10; ++i) {
        randomNumbers[i] = rand() % 3 + 1; 
    }

    cout << "PIN: ";
    for (int i = 0; i <= 9; ++i) {
        cout << i << " ";
    }
    cout << endl;

    cout << "NUM: ";
    int userInput;
    for (int i = 0; i <= 9; ++i) {
        cout << randomNumbers[i] << " ";
    }
    cout << endl;

    cout << "Enter your response: ";
    cin >> userInput;

    if (userInput == actualPIN) {
        cout << "Authentication successful!" << endl;
    }
    else {
        cout << "Authentication failed." << endl;
    }

    return 0;
}