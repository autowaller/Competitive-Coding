#include <iostream>

using namespace std;

int main() {

    long long number;
    cin >> number;

    if(number & 1) {
        cout << '-';
        number++;
    }
    cout << number / 2 << endl;

    return 0;
}
