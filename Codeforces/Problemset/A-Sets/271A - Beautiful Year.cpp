#include <iostream>

using namespace std;

int main() {

    int year, num, w, x, y, z;
    cin >> year;

    for(num = year + 1; num < 9013; num++) {

        year = num;
        w = year % 10;

        year /= 10;
        x = year % 10;

        year /= 10;
        y = year % 10;
        z = year / 10;

        if(w == x || w == y || w == z || x == y || x == z || y == z) {
            continue;
        }
        else {
            break;
        }
    }
    cout << num << endl;

    return 0;
}
