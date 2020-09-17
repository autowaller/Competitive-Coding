#include <iostream>

using namespace std;

int main() {

    string name;
    int upper = 0, lower = 0, lenght;

    cin >> name;
    lenght = name.size();

    for(int i = 0; i < lenght; i++) {
        if(name[i] > 90) {
            lower++;
        }
        else {
            upper++;
        }
    }
    if(lower < upper) {
        for(int i = 0; i < lenght; ++i) {
            if(name[i] > 90) {
                name[i] -= 32;
            }
        }
    }
    else if(lower > upper) {
        for(int i = 0; i < lenght; ++i) {
            if(name[i] < 97) {
                name[i] += 32;
            }
        }
    }
    else {
        for(int i = 0; i < lenght; ++i) {
            if(name[i] < 97) {
                name[i] += 32;
            }
        }
    }
    cout << name << endl;

    return 0;
}
