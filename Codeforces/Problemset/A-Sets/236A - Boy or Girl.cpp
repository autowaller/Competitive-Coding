#include <iostream>
#include <string>

using namespace std;

int arr[125];

int main() {

    string sentence;
    cin >> sentence;

    int count = 0, len = sentence.size();

    for(int i = 0; i < len; i++) {
        arr[sentence[i]]++;

        if(arr[sentence[i]] == 1) {
            count++;
        }
    }

    if(count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
