/*Buatlah program yang membandingkan 2 buah bilangan yang
di-input oleh user. Pada layar akan ditampilkan nilai yang lebih
besar. Jika input sama, maka akan ditampilkan “bilangan
sama”*/

/*Buatlah perbandingan 3 buah bilangan. Pada layar akan
ditampilkan nilai yang paling besar. Jika input sama, maka 
akan ditampilkan “bilangan sama”*/

/*Gunakan fungsi untuk membuat program 1 dan 2 dalam satu 
program baru. Nama fungsi Bandingkan*/

#include<iostream>
using namespace std;

 float bandingkan(int a, int b){
    if (a > b ) {
    cout << "nilai pertama lebih besar dari nilai kedua" << endl;
    }
    else if ( a < b ) {
    cout << "nilai pertama kurang dari nilai kedua" << endl;
    }else {
        cout << "nilai sama";
    }

    return 0;
}

int main(){

    //kamus
    int inpt1, inpt2;
    //rumus
    cout << "masukan angka pertama : ";
    cin >> inpt1; cout << endl;
    cout << "masukan angka kedua : ";
    cin >> inpt2; cout << endl;

    cout << bandingkan(inpt1,inpt2) << endl;

}