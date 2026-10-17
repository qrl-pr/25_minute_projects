#include <iostream>
using namespace std;

void showMotivation() {
    cout << "Mativatsiya" <<endl;
    cout << "Idealnikni beradi" << endl;
    cout << "Intizom choʻqisi" << endl;
}

int main () {
    showMotivation();
    cout << endl;
    cout<<"--- Meng 4ta phonk --"<<endl;

    string songs[4] ={
       "Your songs",
       "Your songs",
       "Your songs",
       "Your songs"
    };
    
    for(int i=0; i<4; i++) {
        cout<< i+1<<"."<<songs[i]<<endl;
}

return 0
}