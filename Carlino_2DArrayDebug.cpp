// Kristoffer Carlino
// C++ 310
// Dr. Robert Flowers
// Carlino_2DArrayDebug.cpp
// This program is designed to store and display temperatures for a 7-day week.


#include <iostream>
using namespace std;

int main() {
    const int days = 7;
    const int times = 3; // Morning, Afternoon, Evening
    double temps[days][times]; // 2D array for temperatures

    cout << "Enter the temperatures for each day (Morning, Afternoon, Evening):" << endl;

    
    for (int i = 0; i < days)
        for (int j = 0; j < times; j++) {
            cout << "Day " << i + 1 << ", Time " << j + 1 << ": ";
            cin >> temps[i][j];
        }

    cout << "\nWeekly Temperature Report:" << endl;

   
    for (int i = 0; i < days; i++) {
        for (int j = 0; j < times; j++) {
            cout << temperature[i][j] << " "; 
        }
        cout << endl;
    }

    return 0;
}
