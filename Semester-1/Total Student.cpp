
2
#include <iostream>
using namespace std;

int main() {
    int present, totalPresent = 0;
    for (int i = 1; i <= 20; i++) {
        cout << "Enter present students in class (0-50)" << i << ": ";
        cin >> present;
        totalPresent += present;
    }
    int totalStudents = 20 * 50;
    int totalAbsent = totalStudents - totalPresent;
    double percentage = (totalPresent * 100.0) / totalStudents;

    cout << "Total Students: " << totalStudents << endl;
    cout << "Total Present Students: " << totalPresent << endl;
    cout << "Total Absent Students: " << totalAbsent << endl;
    cout << "Attendance Percentage: " << percentage << "%";

    return 0;
}
