#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int array[5][5];
    int row, col;
    int move;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> array[i][j];
            if (array[i][j] == 1){
                row = i;
                col = j;
            }
        }
    }

    move = abs(row - 2) + abs (col - 2);
    cout << move;

    return 0;
}