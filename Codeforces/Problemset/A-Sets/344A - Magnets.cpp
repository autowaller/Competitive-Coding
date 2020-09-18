#include<iostream>

using namespace std;

int main() {

    int number, x, count = 1;

    cin >> number;
    cin >> x;

    number--;

    while(number--) {
        int y;
        cin >> y;

        if(y == 10 && x == 01) {
            count++;
        }
        else if(y == 01 && x == 10) {
            count++;
        }
        x = y;

    }
    cout << count << endl;

    return 0;
}