#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    string name, name1;

    cin >> name >> name1;

    reverse(name.begin(), name.end());

    if(name == name1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}
