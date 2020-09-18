#include<iostream>

using namespace std;

int main() {
    int quantity, number, list[100];
    cin >> quantity;

    for(int i = 1;i <= quantity;i++) {
        cin >> number;
        list[number] = i;
    }

    for(int i = 1;i <= quantity;i++) {
        cout << list[i] << " ";
    }
    cout << endl;

    return 0;
}