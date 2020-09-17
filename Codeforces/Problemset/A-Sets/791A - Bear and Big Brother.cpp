#include<iostream>

using namespace std;

int main() {

    int x, y, years = 0;

    cin >> x >> y;

    while(x <= y) {
        years++;

        x *= 3;
        y *= 2;
    }
    cout << years << endl;

    return 0;
}