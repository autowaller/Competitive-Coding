#include<iostream>

using namespace std;

int main() {

    int number;
    cin >> number;

    for(int i = 1; i <= number; i++) {

        if(i % 2 == 0) {
            cout << "I love ";
        }
        else {
            cout << "I hate ";
        }
        if(i == number) {
            cout << "it" << endl;
        }
        else {
            cout << "that ";
        }
    }
    return 0;
}