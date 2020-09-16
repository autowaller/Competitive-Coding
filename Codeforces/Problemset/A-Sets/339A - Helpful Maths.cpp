#include<iostream>
#include<algorithm>
#include <vector>

using namespace std;

vector<int>vec;

int main() {

    char a;
    string word;

    cin >> word;

    for(int i = 0;i < word.size();i++) {

        a = word[i];

        if(a != '+') {
            vec.push_back(a - '0');
        }
    }

    sort(vec.begin(),vec.end());

    for(int i = 0; i < vec.size(); i++) {
        if(i) {
            cout << "+";
        }

        cout << vec[i];

    }
    cout << endl;

    return 0;
}