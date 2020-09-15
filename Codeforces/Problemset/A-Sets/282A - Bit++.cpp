#include<iostream>

using namespace std;

int main() {

    int number, result=0;
    string operation;

    cin >> number;

    while(number--) {
        cin >> operation;

        if(operation == "++X" || operation == "X++") {
            result++;
        }
        else {
            result--;
        }
    }
    cout << result << endl;

    return 0;
}