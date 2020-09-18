#include<iostream>

using namespace std;

int main() {

    int amount, height, friends, count=0;
    cin >> amount >> height;

    while(amount--) {
        cin >> friends;

        if(friends > height) {
            count += 2;
        }

        else {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}