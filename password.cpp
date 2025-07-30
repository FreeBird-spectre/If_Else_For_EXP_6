// Abir Seth
// PRN-24070123003
// EnTC A1

#include <iostream>
using namespace std;

int main() {
    string password = "King2005abir";  // Set your password
    string user_password;
    int attempts = 3;

    while (attempts > 0) {
        cout << "Enter password: ";
        cin >> user_password;

        if (user_password == password) {
            cout << "Correct password. Login successful!" << endl;
            break;
        } else {
            attempts--;
            cout << "Wrong password. Attempts left: " << attempts << endl;
        }
    }

    if (attempts == 0) {
        cout << "Access denied. You used all attempts." << endl;
    }

    return 0;
}

Enter password: sydfjxnmcj
Wrong password. Attempts left: 2
Enter password: zdfxhjgctujxf
Wrong password. Attempts left: 1
Enter password: vydty ru ty
Wrong password. Attempts left: 0
Access denied. You used all attempts.


=== Code Execution Successful ===
