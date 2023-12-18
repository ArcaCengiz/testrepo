#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    int age;

    getline(cin, name);
    cin >> age;

    if (name.empty()) {
        cout << "invalid name" << endl;
    }

    if (age < 18 && age > 0) {
        cout << "valid" << endl;
        return 0;
    }

    return 0;
}
