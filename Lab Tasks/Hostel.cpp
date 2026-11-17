#include <iostream>
using namespace std;

int main() 
{
    string admissionStatus;
    string hostelFeeStatus;
    int distance;

    cout << "Enter Admission Status (Yes/Not):\n";
    cin >> admissionStatus;

    if (admissionStatus == "Not")
    {
        cout << "You are not eligible for hostel accommodation\n";
    }
    else if (admissionStatus == "Yes")
    {
        cout << "Enter Hostel Fee Status (Paid/Unpaid): ";
        cin >> hostelFeeStatus;

        if (hostelFeeStatus == "Unpaid")
        {
            cout << "Please pay hostel fee to proceed with allocation\n";
        }
        else if (hostelFeeStatus == "Paid")
        {
            cout << "Enter distance from home in km:\n";
            cin >> distance;

            if (distance >= 200)
                cout << "Hostel Room Allocated\n";
            else if (distance >= 100)
                cout << "Added to Waiting List\n";
            else if (distance >= 50)
                cout << "Limited Seats: Allocation Subject to Availability\n";
            else
                cout << "Not Eligible for Hostel (Nearby Residence)\n";
        }
        else
        {
            cout << "Invalid Hostel Fee Status\n";
        }
    }
    else
    {
        cout << "Invalid Admission Status\n";
    }

    return 0;
}
