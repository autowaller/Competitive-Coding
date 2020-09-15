#include<iostream>

using namespace std;

int main() {

    int number, place, score[100], advances = 0;
    cin >> number >> place;

    for(int i = 0; i < number; i++) {
        cin >> score[i];
    }

    for(int i = 0; i < number; i++) {

        if(score[i] < 1) {
            continue;
        }
        else if(score[i] >= score[place-1]) {
            advances++;
        }

    }
    cout << advances << endl;

    return 0;
}