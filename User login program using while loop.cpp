//EXPERIMENT-6
//Vaishnavi Pangare
//25070123501
//ENTC A3
//TITLE: Write a program which asks user's PRN  and password and log In the user to his/her portal using while loop. 

#include <iostream>
using namespace std;

int main() {
    long long PRN;
    int key;
    int userkey;
    int choice;
    bool loggedIn = false;

    cout << "Welcome to MOODLE software." << endl;

    cout << "Enter your PRN (numbers only): ";
    cin >> PRN;

    cout << "Set your password (numbers only): ";
    cin >> key;

    while (true) {
        cout << "Enter your password to login: ";
        cin >> userkey;

        if (userkey == key) {
            cout << "Login successful! Welcome to your portal." << endl;
            loggedIn = true;
            break;
        } else {
            cout << "Incorrect password!" << endl;
            cout << "--- MENU ---" << endl;
            cout << "1. Retry login" << endl;
            cout << "2. Change password (requires old password)" << endl;
            cout << "3. Forgot password" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                continue;
            } else if (choice == 2) {
                int oldKey;
                cout << "Enter your current password: ";
                cin >> oldKey;

                if (oldKey == key) {
                    cout << "Enter new password: ";
                    cin >> key;
                    cout << "Password changed successfully." << endl;
                } else {
                    cout << "Incorrect current password. Cannot change password." << endl;
                }
            } else if (choice == 3) {
                cout << "Please contact admin at: help@moodle.com" << endl;
            } else if (choice == 4) {
                cout << "Exiting... Goodbye!" << endl;
                break;
            } else {
                cout << "Invalid option. Try again." << endl;
            }
        }
    }

    return 0;
}


/*Output:-

Welcome to MOODLE software.
Enter your PRN (numbers only): 24070123069
Set your password (numbers only): 12345678
Enter your password to login: 2345678
Incorrect password!
--- MENU ---
1. Retry login
2. Change password (requires old password)
3. Forgot password
4. Exit
Enter your choice: 1
Enter your password to login: 12345678
Login successful! Welcome to your portal.
*/
