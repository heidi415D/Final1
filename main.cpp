//Milestone 1
#include <iostream>
#include <string>
#include <fstream>
#include <map>
using namespace std;

int main () {
    ifstream in("210-final-1-FA25.txt");

    if (!in) {
        cerr << "Could not open file" << endl;
        return 1;
    }

     map<string, int> traffic;

    string origin, dest;
    
    while (in >> origin >> dest) {
        traffic[origin]++;
    }

    cout << "Size of map: " << traffic.size() << endl;
    
    return 0;
}