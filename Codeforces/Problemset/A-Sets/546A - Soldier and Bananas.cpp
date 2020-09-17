#include <iostream>

using namespace std;

int main() {

    int price, balance, amount, answer;

    cin >> price >> amount >> balance;
    answer = (price * ((balance * (balance + 1)) / 2)) - amount;

    if(answer < 0) answer = 0; {
        cout << answer << endl;
    }

    return 0;
}
