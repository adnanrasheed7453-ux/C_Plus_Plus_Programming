#include <iostream>
#include <string>
using namespace std;

int main()
{
    // ===== ACCOUNT INFORMATION =====
    string accountHolder = "Developers";
    int accountNumber = 1234;
    int pin = 1111;
    string securityAnswer = "pakistan";

    double balance = 50000;
    double dailyWithdrawLimit = 20000;
    double withdrawnToday = 0;

    // ===== MINI STATEMENT STORAGE =====
    string t1="", t2="", t3="", t4="", t5="";
    int transCount = 0;
    int totalTransactions = 0;

    int enteredAcc, enteredPin;
    int tries = 0;
    bool login = false;

    cout << "==========================================" << endl;
    cout << "            WELCOME TO ATM                " << endl;
    cout << "==========================================" << endl;

    // ===== LOGIN SYSTEM =====
    while(tries < 3)
    {
        cout << "\nEnter Account Number: ";
        cin >> enteredAcc;

        cout << "Enter PIN: ";
        cin >> enteredPin;

        if(enteredAcc == accountNumber && enteredPin == pin)
        {
            cout << "Login Successful!" << endl;
            login = true;
            break;
        }
        else
        {
            tries++;
            cout << "Wrong Details!" << endl;
            cout << "Attempts Left: " << 3 - tries << endl;
        }
    }

    if(login == false)
    {
        cout << "\nCard Blocked!" << endl;
        return 0;
    }

    int choice;

    // ===== MAIN MENU LOOP =====
    while(true)
    {
        cout << "\n==========================================" << endl;
        cout << "                MAIN MENU                 " << endl;
        cout << "==========================================" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Fast Cash" << endl;
        cout << "5. Change PIN" << endl;
        cout << "6. Mini Statement" << endl;
        cout << "7. Transfer Money" << endl;
        cout << "8. Account Details" << endl;
        cout << "9. Logout" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        // ===== CHECK BALANCE =====
        if(choice == 1)
        {
            cout << "Current Balance: " << balance << endl;

            t5=t4; t4=t3; t3=t2; t2=t1;
            t1="Checked Balance";
            if(transCount<5) transCount++;       
            totalTransactions++;
        }

        // ===== DEPOSIT =====
        else if(choice == 2)
        {
            double amount;
            cout << "Enter Amount: ";
            cin >> amount;

            if(amount > 0)
            {
                balance += amount;
                cout << "Deposit Successful!" << endl;
                cout << "New Balance: " << balance << endl;

                t5=t4; t4=t3; t3=t2; t2=t1;
                t1="Deposited Money";
                if(transCount<5) transCount++;
                totalTransactions++;
            }
            else
                cout << "Invalid Amount!" << endl;
        }

        // ===== WITHDRAW =====
        else if(choice == 3)
        {
            double amount;
            cout << "Enter Amount: ";
            cin >> amount;

            if(amount > 0 && amount <= balance && withdrawnToday + amount <= dailyWithdrawLimit)
            {
                balance -= amount;
                withdrawnToday += amount;

                cout << "Collect Your Cash" << endl;
                cout << "Remaining Balance: " << balance << endl;

                t5=t4; t4=t3; t3=t2; t2=t1;
                t1="Withdraw Money";
                if(transCount<5) transCount++;
                totalTransactions++;
            }
            else
                cout << "Limit Exceeded OR Insufficient Balance!" << endl;
        }

        // ===== FAST CASH =====
        else if(choice == 4)
        {
            int opt;
            double amount = 0;

            cout << "1. 1000\n2. 2000\n3. 5000\n4. 10000\n";
            cin >> opt;

            if(opt==1) amount=1000;
            else if(opt==2) amount=2000;
            else if(opt==3) amount=5000;
            else if(opt==4) amount=10000;
            else
            {
                cout << "Invalid Option!" << endl;
                continue;
            }

            if(amount <= balance && withdrawnToday + amount <= dailyWithdrawLimit)
            {
                balance -= amount;
                withdrawnToday += amount;

                cout << "Cash Withdrawn: " << amount << endl;

                t5=t4; t4=t3; t3=t2; t2=t1;
                t1="Fast Cash";
                if(transCount<5) transCount++;
                totalTransactions++;
            }
            else
                cout << "Limit Exceeded OR Insufficient Balance!" << endl;
        }

        // ===== CHANGE PIN =====
        else if(choice == 5)
        {
            int oldPin,newPin,confirmPin;

            cout << "Enter Old PIN: ";
            cin >> oldPin;

            if(oldPin == pin)
            {
                cout << "Security Question: Your Country? ";
                string ans;
                cin >> ans;

                if(ans == securityAnswer)
                {
                    cout << "Enter New PIN: ";
                    cin >> newPin;

                    cout << "Confirm New PIN: ";
                    cin >> confirmPin;

                    if(newPin == confirmPin)
                    {
                        pin = newPin;
                        cout << "PIN Changed Successfully!" << endl;

                        t5=t4; t4=t3; t3=t2; t2=t1;
                        t1="Changed PIN";
                        if(transCount<5) transCount++;
                        totalTransactions++;
                    }
                    else
                        cout << "PIN Not Match!" << endl;
                }
                else
                    cout << "Wrong Security Answer!" << endl;
            }
            else
                cout << "Wrong Old PIN!" << endl;
        }

        // ===== MINI STATEMENT =====
        else if(choice == 6)
        {
            cout << "Last 5 Transactions:" << endl;

            if(transCount==0)
                cout << "No Transactions Yet" << endl;
            else
            {
                if(t1!="") cout << t1 << endl;
                if(t2!="") cout << t2 << endl;
                if(t3!="") cout << t3 << endl;
                if(t4!="") cout << t4 << endl;
                if(t5!="") cout << t5 << endl;
            }
        }

        // ===== TRANSFER MONEY =====
        else if(choice == 7)
        {
            int receiverAcc;
            double amount;

            cout << "Enter Receiver Account Number: ";
            cin >> receiverAcc;

            cout << "Enter Amount To Transfer: ";
            cin >> amount;

            if(amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout << "Transfer Successful!" << endl;
                cout << "Remaining Balance: " << balance << endl;

                t5=t4; t4=t3; t3=t2; t2=t1;
                t1="Transferred Money";
                if(transCount<5) transCount++;
                totalTransactions++;
            }
            else
                cout << "Invalid Amount!" << endl;
        }

        // ===== ACCOUNT DETAILS =====
        else if(choice == 8)
        {
            cout << "Account Holder: " << accountHolder << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Current Balance: " << balance << endl;
            cout << "Total Transactions: " << totalTransactions << endl;
            cout << "Withdrawn Today: " << withdrawnToday << endl;
        }

        // ===== LOGOUT =====
        else if(choice == 9)
        {
            cout << "Logged Out Successfully!" << endl;
            break;
        }
        else
            cout << "Invalid Choice!" << endl; 
    }

    cout << "\nThank You For Using ATM!" << endl;
    return 0;
}
