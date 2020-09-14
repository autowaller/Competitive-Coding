#include <iostream>

using namespace std;

int main() {

    int weight;

    cin >> weight;

    if(weight == 2) {
        cout << "NO" << endl;
    }
    else if(weight & 1) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }

    return 0;
}
 