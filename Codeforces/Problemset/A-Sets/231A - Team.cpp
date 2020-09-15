#include<iostream>

using namespace std;

int main() {

    int number, verdict, input, result = 0;
    cin >> number;

    while(number--) {
        int sum = 0;
        input = 3;

        while(input--) {
            cin >> verdict;
            sum += verdict;
        }
        if(sum > 1)
            result++;
    }
    cout << result << endl;

    return 0;
}