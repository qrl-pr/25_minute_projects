#include <iostream>
using namespace std;

int main() {
    // 3 ta phonk qo'shiq - array
    string songs[3] = {
        "Kordhell - Murder in My Mind",
        "LXNGVX - MONTAGEM SONORA",
        "Metamorphosis - Interworld"
    };

    // array ni for bilan chiqarish
    for(int i = 0; i < 3; i++) {
        cout << i+1 << ". " << songs[i] << endl;
    }

    return 0;
}