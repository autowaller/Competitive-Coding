#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int amount, number;
    double result;

    cin >> amount;

    for(int i = 0; i < amount; i++) {
        cin >> number;
        result += number;
    }
    result /= amount;

    cout << fixed << setprecision(12) << result << endl;

    return 0;
}
