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
        traffic[dest]++;
    }

    cout << "All airport traffic counts:" << endl;
    for (const auto& entry : traffic) {
        cout << entry.first << " " << entry.second << endl;
    }
    
    return 0;
}