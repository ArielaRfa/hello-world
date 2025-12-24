#include <iostream>
#include <string>
#include <vector>
#include <iomanip> 

using namespace std;
void greetUsers(const vector<string>& users) {
    cout << "----------------------------------\n";
    for (const auto& user : users) {
        cout << "Hello, " << user << "! Welcome to C++ world.\n";
    }
    cout << "----------------------------------\n";
}
void displayTable() {
    cout << left << setw(10) << "ID" 
         << setw(20) << "Name" 
         << setw(10) << "Score" << endl;
    cout << string(40, '-') << endl;
    cout << setw(10) << 1 << setw(20) << "Alice" << setw(10) << 95 << endl;
    cout << setw(10) << 2 << setw(20) << "Bob" << setw(10) << 88 << endl;
    cout << setw(10) << 3 << setw(20) << "Charlie" << setw(10) << 92 << endl;
}

int main() {
    cout << "=== Advanced Hello World Program ===\n\n";

    vector<string> users = {"Alice", "Bob", "Charlie"};
    greetUsers(users);

    cout << "\nDisplaying a sample table:\n";
    displayTable();

    cout << "\nProgram completed successfully!\n";
    return 0;
}
