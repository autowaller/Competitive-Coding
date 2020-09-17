#include <iostream>

using namespace std;

int main() {

    int x, exit, enter, current = 0, maxcurrent = 0;

    cin >> x;

    while(x--) {
        cin >> exit >> enter;

        current += enter;
        current -= exit;

        if(current > maxcurrent) {
            maxcurrent = current;
        }
    }
    cout << maxcurrent;

    return 0;
}