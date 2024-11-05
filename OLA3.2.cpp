/*
Agliam, Frank Charles A.
OLA3.2
*/
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

void login();
void read();
void write();

int main() {
    int choice;

    while(true) {
        cout << "Menu:" << endl;
        cout << "1. User Login\n";
        cout << "2. Read Data from the File" << endl;
        cout << "3. Write Data to the File" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                login();
                break;
            case 2:
                read();
                break;
            case 3:
                write();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                exit(1);
        }
    }

    return 0;
}

void login() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == "username" && password == "password") {
        cout << "Login successful!" << endl;
    } else {
        cout << "Invalid username or password." << endl;
    }
}

void read() {
    ifstream infile;
    infile.open("data.txt");
    if (infile.fail()) {
        cout << "Error opening file." << endl;
        return;
    }

    string line;
    cout << "Reading data from file:" << endl;;
    while (getline(infile, line)) {
        cout << line << endl;
    }

    infile.close();
}

void write() {
    ofstream outfile;
    outfile.open("data.txt", ios::app);
    if (outfile.fail()) {
        cout << "Error opening file." << endl;
        return;
    }

    string data;
    cout << "Enter data to write: ";
    cin.ignore();
    getline(cin, data);
    outfile << data << endl;

    outfile.close();
    cout << "Data written to file successfully." << endl;
}
