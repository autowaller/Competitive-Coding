#include <iostream>

using namespace std;

int a, b, c = 102, count[105], first, second, result;

int main() {

    cin >> a;

    for (int i = 0; i < a; i++) {

        cin >> count[i];

        if (b < count[i]) {
            b = count[i];
            first = i;
        }

        if (c >= count[i]) {
            c = count[i];
            second = i;
        }
    }

    result = first + (a - second - 1);

    if (first > second) {
        result--;
    }
    cout << result;
}