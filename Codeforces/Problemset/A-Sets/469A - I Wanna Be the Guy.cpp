#include <iostream>

using namespace std;

bool res[102];

int main() {
    int i, a, b, c;
    cin >> a >> b;

    for(i = 0; i < b; i++) {
        cin >> c;
        res[c]=1;
    }
    cin >> b;

    for(i = 0; i < b; i++) {
        cin >> c;
        res[c]=1;
    }
    a++;

    for(i = 1; i < a; i++) {
        if(!res[i]) {
            break;
        }
    }

    if(i == a) {
        cout << "I become the guy." << endl;
    }
    else {
        cout << "Oh, my keyboard!" << endl;
    }
}
