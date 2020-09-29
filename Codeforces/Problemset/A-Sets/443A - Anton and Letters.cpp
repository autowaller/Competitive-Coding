#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {

    string name;

    set <char> count;
    getline(cin, name);

    for(int i=0; i < name.length(); i++) {

        if(name[i] >= 'a' && name[i] <= 'z') {
            count.insert(name[i]);
        }

    }
    cout << count.size() << endl;

    return 0;
}