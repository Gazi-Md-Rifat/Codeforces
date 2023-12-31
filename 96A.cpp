#include <iostream>
using namespace std;

bool isDangerous(string s){
int team1 = 0;
int team2 = 0;
for (int i = 0; i < s.length(); i++){
if (s[i] == '1'){
team1++;
team2 = 0;
}
        else if (s[i] == '0'){
team2++;
team1 = 0;
}

if (team1 >= 7 || team2 >= 7){
return true;
    }
        }
    return false;
}

int main(){

    string player;
    cin >> player;

    if (isDangerous(player)){
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}