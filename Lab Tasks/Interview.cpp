#include <iostream>
using namespace std;

int main() {
    int degree;
    int experience;
    int score;

    
    cout << "Do you have a degree? (1 = Yes, 0 = No): ";
    cin >> degree;

    if (degree == 0) {
        cout << "Not eligible for the job";
    }
    else {
        
        cout << "Enter your experience (in years): ";
        cin >> experience;

        if (experience < 1) {
            cout << "Gain more experience to apply";
        }
        else {
            
            cout << "Enter your test score: ";
            cin >> score;

            if (score >= 85) {
                cout << "Selected for Interview (Priority)";
            }
            else if (score >= 70) {
                cout << "Selected for Interview";
            }
            else if (score >= 60) {
                cout << "Waitlisted";
            }
            else {
                cout << "Not selected";
            }
        }
    }

    return 0;
}
