//Milestone 1
#include <iostream>
#include <string>
#include <fstream>
#include <map>
using namespace std;

int main () {
    ifstream in("210-final-1-FA25.txt");

    if (in.is_open()) {
        cout << "Could not open file.\n";
        return 1;
    }

    map<string, int> traffic;

    string origin, dest;
    
    if (in >> origin >> dest) {
        cout << "First pair: " << origin << " " << dest << endl;
    }

    return 0;
}