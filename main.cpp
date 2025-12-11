//Milestone 1
#include <iostream>
#include <string>
#include <fstream>
#include <map>
using namespace std;

//Milestone 3 

void printRange(const map<string, int> &traffic, int low, int high) {
    cout << "Airports with traffic in range [" << low << ", " << high << "]:" << endl;

    for (const auto& entry : traffic) {
        if (entry.second >= low && entry.second <= high) {
            cout << entry.first << " " << entry.second << endl;
        }
    }

    cout << endl;
}

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

    cout << endl;

    // milestone 2
    int maxCount = 0;

    for (const auto& entry : traffic) {
        if (entry.second > maxCount) {
            maxCount = entry.second;
        }
    }

    cout << "Busiest airport traffic count: " << maxCount << endl;
    cout << "Busiest airports:" << endl;
   
    for (const auto& entry : traffic) {
        if (entry.second == maxCount) {
            cout << entry.first << endl;
        }
    }

    cout << endl;

    // milestone 3
    printRange(traffic, 5, 10);
    printRange(traffic, 20, 40);

    return 0;

}