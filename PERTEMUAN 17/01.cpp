#include <iostream>
using namespace std;

int main(){
    int volume;
    cout << "Masukan Angka Volume ="; cin >> volume;
    if (volume >= 1000){
        cout << "Volume lebih dari satu liter";
    }else {
        cout << "Volume kurang dari satu liter";
    }
}