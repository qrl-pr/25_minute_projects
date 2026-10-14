#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Yoshingni kirit: ";
    cin >> x;
    if (x >= 18) {
        cout << "Hush kelibsiz";
    } else {
        cout << "Kechirasiz lekin kira olmaysiz";
    }
    return 0;
}