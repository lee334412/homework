#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> gradesCount(6, 0); 

    cout << "Enter grades for each student (0 to 5) separated by spaces. Enter -1 to finish: " << endl;
    int grade;
    while (true) {
        cin >> grade;
        if (grade == -1) {
            break;
        }
        if (grade >= 0 && grade <= 5) {
            gradesCount[grade]++;
        }
        else {
            cout << "Invalid grade entered. Please enter a grade between 0 and 5." << endl;
        }
    }

    for (int i = 0; i < gradesCount.size(); ++i) {
        cout << gradesCount[i] << " grade(s) of " << i << " ";
    }
    cout << endl;

    return 0;
}