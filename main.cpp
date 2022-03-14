/**
 * Main program for mat_exercise.
 * 
 * Author: TRashi Pachino
 * ID: 345174478
 */

#include "mat.hpp"

#include <iostream>
#include <stdexcept>
using namespace std;
using namespace ariel;

int main() {
    cout << "If you'd like to design a mat, please enter the length and width of your desired mat." << endl;
    int col, row;
    cin >> col >> row;
    cout << "Great! Next enter the symbols you'd like in your mat pattern!" << endl;
    char s1, s2;
    cin >> s1 >> s2;
    cout << "Here is your design:" << endl;
    cout << mat(col, row, s1, s2) << endl;
    
    return 0;
}
