#include <iostream>

using namespace std;

int main() {
    string first, second;
    int lenght1, lenght2, maximum, minimum;

    cin >> first >> second;

    lenght1 = first.size();
    lenght2 = second.size();

    if (lenght1 > lenght2) {
        minimum = lenght2;
    } else {
        minimum = lenght1;
    }
    if (lenght1 < lenght2) {
        maximum = lenght2;
    } else {
        maximum = lenght1;
    }

    for(int i = 0; i < maximum; ++i) {
        if(i < minimum) {
            if(first[i] == second[i]) {
                cout << '0';
            }
            else {
                if(first[i] == '1' || second[i] == '1') {
                    cout << '1';
                }
                else {
                    cout<<'0';
                }
            }
        }
        else {
            if(maximum == lenght1) {
                for (i = minimum; i < maximum; ++i) {
                    cout << first[i];
                }
            }
            else {
                for (i = minimum; i < maximum; ++i) {
                    cout << second[i];
                }
            }
        }
    }
    cout << endl;

    return 0;
}
