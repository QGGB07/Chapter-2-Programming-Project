#include <iostream>
using namespace std;

int main() {
    double riseRate = 1.5;
    int year = 1;

    while (year <= 25) {
        double oceanRise = year * riseRate;
        cout << "Year " << year << ": " << oceanRise << " millimeters" << endl;
        year = year + 1;
    }

    return 0;
}


