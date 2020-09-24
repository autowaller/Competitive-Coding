#include <iostream>

using namespace std;

bool res[100009];

int main() {

    int a, b, c, d, e, answer = 0;
    cin >> a >> b >> c >> d >> e;

    if(a == 1 || b == 1 || c == 1 || d == 1) {
        return 0 * printf("%d\n", e);
    }

    for(int i = a; i <= e; i += a) {
        res[i] = 1;
    }

    for(int i = b; i <= e; i += b) {
        res[i] = 1;
    }

    for(int i = c; i <= e; i += c) {
        res[i] = 1;
    }

    for(int i = d; i <= e; i += d) {
        res[i] = 1;
    }

    for(int i = 1; i <= e; i++) {
        if(!res[i]) {
            answer++;
        }
    }

    cout << e - answer << endl;

}
