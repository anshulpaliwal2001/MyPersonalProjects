#include <iostream>
#include <random>

using namespace std;

int main() {
    int row = 4;            //Row size not less than 2
    int col = 5;            //Column size not less than 2
    int arr[row][col];      //Initialize matrix
    int flag = 0;           //For incremental sequence
    srand(time(nullptr));   //For random numbers in matrix

//     Initialize matrix with random numbers or incremental sequence
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; ++j) {
            arr[i][j] = ++flag;
//            or
//            arr[i][j] = (rand() % (row*col) + 1);
        }
    }

//    Print complete matrix
    cout << "Matrix : " << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; ++j) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "================================\n";

//    Print Edge sequence
//    Part 1 : Top left to top right + top right to bottom right
    cout << "Edge Sequence : ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; ++j) {
            if (i == 0 || j == col - 1)
                cout << arr[i][j] << " > ";
        }
    }
//    Part 2 : Bottom right to bottom left + bottom left to top left
    for (int i = row - 1; i >= 0; i--) {
        for (int j = col - 1; j >= 0; --j) {
            if ((i == row - 1 && j != col - 1) || (j == 0 && i != 0))
                cout << arr[i][j] << " > ";
        }
    }

//     :)

    return 0;
}
