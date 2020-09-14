#include <iostream>

using namespace std;

int main(){

    int times;
    cin >> times;

    string word;

    while (times--) {
        cin >> word;

        if (word.size() < 11) {
            cout << word << endl;
        }

        else {
            cout << word[0] << word.size() - 2 << word[word.size()-1] << endl;
        }

    }
    return 0;
}