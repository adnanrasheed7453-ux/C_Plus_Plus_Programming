#include <iostream>
using namespace std;

int main()
{
    char password[100];

    cout << "Enter password: ";
    cin.getline(password, 100);

    int length = 0;
    int upper = 0;
    int Digit = 0;
    int special = 0;

    for (int i = 0; password[i] != '\0'; i++)
    {
        length++;

        if (password[i] >= 'A' && password[i] <= 'Z')
        {
            upper++;
        }
        else if (password[i] >= '0' && password[i] <= '9')
        {
            Digit++;
        }
        else
        {
            special++;
        }
    }

    if (length < 8)
    {
        cout << "Password must be at least 8 characters";
    }
    else if (upper >= 1 && Digit >= 1 && special >= 1)
    {
        cout << "Strong password";
    }
    else
    {
        cout << "Weak password";
    }

    return 0;
}
