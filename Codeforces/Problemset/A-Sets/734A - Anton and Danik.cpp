#include<iostream>

using namespace std;

int main() {

    int amount, Danik = 0, Anton = 0;
    cin >> amount;

    while(amount--) {

        char letter;
        cin >> letter;

        if(letter == 'A') {
            Anton++;
        }
        else if(letter == 'D') {
            Danik++;
        }
    }

    if(Anton > Danik) {
        cout << "Anton" << endl;
    }
    else if(Danik > Anton) {
        cout << "Danik" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }
    return 0;
}