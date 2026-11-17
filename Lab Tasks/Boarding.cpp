#include <iostream>
using namespace std;
int main()
{
    int ticket, id;
    float luggage;
    cout<< "Enter 1 if ticket is valid, 0 if not: ";
    cin>> ticket;
    if (ticket == 0)
    {
        cout<< "Boarding Denied: No valid ticket";
    }
    else
    {
        cout<< "Enter 1 if ID is verified, 0 if not: ";
        cin>> id;
        if (id == 0)
        {
            cout<< "Please verify your identity";
        }
        else
        {
            cout<< "Enter luggage weight (kg): ";
            cin>> luggage;
            if (luggage <= 20)
            {
                cout<< "Boarding Allowed";
            }
            else if (luggage <= 30)
            {
                cout<< "Pay extra baggage fee";
            }
            else
            {
                cout<< "Luggage exceeds limit - Not Allowed";
            }
        }
    }

    return 0;
}
