#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void calculation() {

    int first , second;
    cin >> first >> second;

    int ans;
    ans = ceil((double) first / second);

    ans = ans * second - first;

    cout << ans << endl ;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int amount;
    cin >> amount;

    int i;
    for (i = 1; i <= amount; i++) {
        calculation();
    }
    return 0;
}