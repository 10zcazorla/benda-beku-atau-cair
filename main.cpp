#include <iostream>

using namespace std;

int main()
{
    int suhu;
    cout << "Apakah Zat yang anda punya beku? Mari kita tes!" << endl;
    cout << "Masukkan suhu benda: ";
    cin >> suhu;

    if(suhu > 0) {
        cout << "\nSuhu lebih dari 0 drajat celcius, benda yang kamu input tidak beku. " << endl;
    }
    else {
        cout << "\nSuhu kurang dari 0 drajat celcius,benda kamu input beku. " << endl;

    }
    return 0;
    }
