#include <iostream>
using namespace std;

int main() {
    int course;
    int quiz;
    int attendance;

    
    cout << "Is course completed? (1 = Yes, 0 = No): ";
    cin >> course;

    if (course == 0) {
        cout << "Complete the course to receive certificate";
    }
    else {
        
        cout << "Enter quiz score: ";
        cin >> quiz;

        if (quiz < 50) {
            cout << "Improve quiz score to qualify for your certificate";
        }
        else {
            
            cout << "Enter  your attendance percentage: ";
            cin >> attendance;

            if (attendance >= 90) {
                cout << "Certificate with Distinction";
            }
            else if (attendance >= 75) {
                cout << "Certificate Awarded";
            }
            else {
                cout << "Certificate on Hold due to low attendance";
            }
        }
    }

    return 0;
}
