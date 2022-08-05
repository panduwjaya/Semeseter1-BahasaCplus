//SOAL NOMOR 04
/*Buatlah program untuk membaca sekumpulan
bilangan bulat (integer) yang diakhiri -999 (-999 tidak 
termasuk), dan mencetak banyaknya bilangan genap,
ganjil, positif, dan negatif. Bilangan 0 adalah bilangan
genap, tetapi tidak positif atau pun negatif.*/

#include <iostream>
using namespace std;

int main (){
    int inpt, bilgenap, bilganjil, bilpositif, bilnegatif;//deklarasi atau inisialisasi
    //ini adalah nilai awal dari setiap bilangan
    bilgenap=0; 
    bilganjil=0; 
    bilpositif=0; 
    bilnegatif=0;

    //pemasukan nilai
    cout << "MASUKAN ANGKA DIBAWAH INI = " << endl; cin >> inpt;
    //ketika kita memasukan angka -999 program akan berhenti karena tidak memenuhi syarat
    while (inpt > -999){
        if (inpt % 2 == 0){
            bilgenap++;
        }else if(inpt % 2 != 0){
            bilganjil++;    
        }
        if (inpt > 0){
            bilpositif++;
        }else if (inpt < 0){
            bilnegatif++;
        }
        cin >> inpt; //sebagai inputan angka lanjutan
    }
    
    cout<< "bilangan genap = " << bilgenap << endl;
    cout<< "Bilangan ganjil ada = " << bilganjil << endl;
    cout<< "Bilangan positif ada = " << bilpositif << endl;
    cout<< "Bilangan negatif ada="<< bilnegatif << endl;

}