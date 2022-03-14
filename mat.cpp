#include <iostream>
#include <vector>
using namespace std;

#include "mat.hpp"
static const int CHAR_MIN = 33;
static const int CHAR_MAX = 126;


namespace ariel {
	string mat(int column, int row, char c, char d) {
		if(column%2 != 1 || row%2 != 1 || column < 0 || row < 0 || c < CHAR_MIN || c > CHAR_MAX || d < CHAR_MIN || d > CHAR_MAX) {
            throw invalid_argument("Mat size is always odd!");
        }
        vector<vector<char>> arr(row, vector<char>(column, c));
		string ans;
		//initial fill out
		// for (int i = 0; i < row; i++) {
        //     for (int j = 0; j < column; j++) {
        //         arr[i][j] = c;
        //     }
        // }
        //horizontal
        int k = 1;
        for (int i = 1; i <= row/2; i = i+2) {
            for (int j = k; j < column-i; j++) {
                arr[i][j] = d;
                arr[row-1-i][column-1-j] = d;
            }
              k = k+2;
        }
        //vertical
        int l = 1;
        for (int j = 1; j <= column/2; j = j+2) {
            for (int i = l; i <row-j; i++) {
                arr[i][j] = d;
                arr[i][column - 1 - j] = d;
            }
            l = l+2;
        }
        //transfer to ans
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                ans += arr[i][j];
            }
            ans += '\n';
        }
        return ans;
    }

}