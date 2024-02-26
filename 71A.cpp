#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string word;
        cin >> word;
        if (word.size() > 10){
            string ans = word[0] + to_string(word.size() - 2) + word[word.size() - 1];
            cout << ans;
        }
        else {
            cout << word;
        }
        cout << endl;
    }

    return 0;
}