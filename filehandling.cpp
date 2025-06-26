#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void writeFile(const string& filename) {
    ofstream file(filename);
    if (!file) {
        cout << "Error opening file for writing.\n";
        return;
    }
    string data;
    cout << "Enter data to write into the file:\n";
    cin.ignore();
    getline(cin, data);
    file << data << endl;
    file.close();
    cout << "Data written successfully!\n";
}

void readFile(const string& filename) {
    ifstream file(filename);
    if (!file) {
        cout << "Error opening file for reading.\n";
        return;
    }
    string line;
    cout << "Contents of the file:\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

void appendFile(const string& filename) {
    ofstream file(filename, ios::app);
    if (!file) {
        cout << "Error opening file for appending.\n";
        return;
    }
    string data;
    cout << "Enter data to append:\n";
    cin.ignore();
    getline(cin, data);
    file << data << endl;
    file.close();
    cout << "Data appended successfully!\n";
}

int main() {
    int choice;
    string filename;

    cout << "=== File Management Tool ===\n";
    cout << "1. Write to a file\n";
    cout << "2. Read from a file\n";
    cout << "3. Append to a file\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << "Enter file name (with .txt): ";
    cin >> filename;

    switch (choice) {
        case 1:
            writeFile(filename);
            break;
        case 2:
            readFile(filename);
            break;
        case 3:
            appendFile(filename);
            break;
        default:
            cout << "Invalid choice.\n";
    }

    return 0;
}
