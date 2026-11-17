#include <iostream>
using namespace std;

int main() {
    int category, degree;
    float marks;
    float fee = 0, discount = 0, finalFee;

    cout << "Select Program Category:\n";
    cout << "1. Computer Science\n";
    cout << "2. Business\n";
    cout << "3. Engineering\n\n";
    cout << "Enter choice: ";
    cin >> category;

    switch(category) {
        case 1:
            cout << "\nAvailable Degrees:\n";
            cout << "1. BS Computer Science (120000)\n";
            cout << "2. BS Software Engineering (130000)\n";
            
            cout << "\nEnter degree choice: ";
            cin >> degree;

            switch(degree) {
                case 1:
                    fee = 120000;
                    break;
                case 2:
                    fee = 130000;
                    break;
                default:
                    cout << "Invalid Degree!\n";
                    return 0;
            }

            cout << "\nEnter your marks: ";
            cin >> marks;

            // Discount logic
            if (marks >= 80)
                discount = 0.20;
            else if (marks >= 70)
                discount = 0.10;
            else
                discount = 0;

            finalFee = fee - (fee * discount);

            cout << "\n--- Admission Details ---\n";
            cout << "Program: Computer Science\n";

            switch(degree) {
                case 1:
                    cout << "Degree: BS Computer Science\n";
                    break;
                case 2:
                    cout << "Degree: BS Software Engineering\n";
                    break;
            }

            cout << "Original Fee: " << fee << endl;
            cout << "Discount: " << discount * 100 << "%\n";
            cout << "Final Fee: " << finalFee << endl;
            break;

        case 2:
            cout << "Business programs abhi add nahi kiye.\n";
            break;

        case 3:
            cout << "Engineering programs abhi add nahi kiye.\n";
            break;

        default:
            cout << "Invalid Category!\n";
    }

    return 0;
}
