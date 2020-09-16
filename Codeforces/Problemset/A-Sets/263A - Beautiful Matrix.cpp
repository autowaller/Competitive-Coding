#include<iostream>

using namespace std;

int main() {

    int a,b;

    for(int i = 1;i <= 5;i++) {

        for(int j = 1;j <= 5;j++) {

            int temp;
            cin >> temp;

            if(temp == 1) {
                a = i;
                b = j;
            }
        }

    }
    int result = abs(3 - a)+abs(3 - b);
    cout << result << endl;

    return 0;
}