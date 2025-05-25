#include <iostream>
#include <string>
using namespace std;

int main() {
  
    cout << "Welcome to the Login System!" << endl;

    string users[3] = {"admin", "test", "user"};
    string passwords[3] = {"1234", "abcd", "pass"};

    string inputUser, inputPass;
    bool loggedIn = false;

    for (int attempt = 0; attempt < 3; attempt++) {
        cout << "Enter username: ";
        cin >> inputUser;
        cout << "Enter password: ";
        cin >> inputPass;

        for (int i = 0; i < 3; i++) {
            if (inputUser == users[i] && inputPass == passwords[i]) {
                cout << "Login successful for user: " << inputUser << endl;
                loggedIn = true;
                break;
            }
        }

        if (loggedIn) break;
        else {
           
            cout << "Login failed! Attempt " << (attempt + 1) << " of 3." << endl;
        }
    }

    if (!loggedIn) {
        cout << "All login attempts failed." << endl;
    }

    return 0;
}
