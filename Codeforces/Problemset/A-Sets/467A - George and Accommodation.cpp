#include<iostream>

using namespace std;

int main() {

    int rooms, live, capacity, count = 0;
    cin >> rooms;

    while(rooms--) {
        cin >> live >> capacity;

        if(capacity - live > 1) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}