#include<iostream>

using namespace std;

int main() {

    long number;
    int check = 1;

    cin >> number;

    while(number--) {
        int difficulty;
        cin >> difficulty;

        if(difficulty) {
            check = 0;
        }
    }

    if(check) {
        cout<<"EASY"<<endl;
    }
    else {
        cout<<"HARD"<<endl;
    }


    return 0;
}