#include<iostream>

using namespace std;

int main() {

    string number;
    int count=0;

    cin >> number;

    for(int i=0; i < number.size(); i++) {
        if (number[i] == '4' || number[i] == '7') {
            count++;
        }
    }

    bool flag = 0;

    if(count == 4 || count == 7) {
        flag = 1;
    }
    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}