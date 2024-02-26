#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++){
        string operation;
        cin >> operation;
        if (operation[0] == '+' || operation[2] == '+'){
            x++;
        }
        else {
            x--;
        }
    }

    cout << x;

    return 0;
}