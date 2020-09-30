#include<iostream>

using namespace std;

int main() {

    int amount, result=0;
    cin >> amount;

    while(amount--) {

        string polyhedron;
        cin >> polyhedron;

        if(polyhedron == "Tetrahedron") {
            result += 4;
        }

        else if(polyhedron == "Cube") {
            result += 6;
        }

        else if(polyhedron == "Octahedron") {
            result += 8;
        }

        else if(polyhedron == "Dodecahedron") {
            result += 12;
        }

        else if(polyhedron == "Icosahedron") {
            result += 20;
        }
    }
    cout << result << endl;

    return 0;
}