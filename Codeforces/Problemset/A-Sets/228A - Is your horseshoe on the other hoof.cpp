#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int index[5], result = 3;

    for (int i = 0; i < 4; i++) {
        cin >> index[i];
    }

    sort(index, index + 4);

    for (int i = 0; i < 3; i++) {
        if (index[i] != index[i + 1]) {
            result--;
        }
    }
    cout << result;
}