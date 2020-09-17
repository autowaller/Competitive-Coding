#include <iostream>

using namespace std;

int main() {

    int children,time;
    string arrangement;

    cin >> children >> time;
    cin >> arrangement;

    while(time--) {

        for(int i = 0; i < children - 1; i++) {

            if(arrangement[i] == 'B' && arrangement[i+1] == 'G') {

                swap(arrangement[i],arrangement[i+1]);
                i++;
            }
        }
    }
    cout << arrangement << endl;

    return 0;
}