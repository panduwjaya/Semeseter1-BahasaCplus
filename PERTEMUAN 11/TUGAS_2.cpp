#include <iostream>
using namespace std;

int main(){
    int age;
    int option;
    int schedule;
    int ticket;
    
    cout << "masukan usia anda: " << endl;
    cin >> age;
    if (age > 0,age <= 12)
    {
        cout << "FILM YANG DAPAT DIPILIH ADALAH FILM ANAK-ANAK" << endl;
        cout << "============BERIKUT LIST FILM================" << endl;
        cout << "01.tom & jerry the movie\n02.the adventur of tintin\n03.doraemon last movie" << endl;
        cout << "Masukan pilihan anda dengan memasukan nomor urut film yang anda pilih" << endl;
        cin >> option;
            if (option = 01 || 02 || 03){
                cout << "Pilih jadwal untuk menonton" << endl;
                cout << "01. 08.00 AM\n02. 02.00 PM\n03.08.00 PM" << endl;
                cout << "Pilih jadwal sesuai dengan memasukan nomor list daftar" << endl;
                cin >> schedule;
                    if (schedule = 01 || 02 || 03)
                    {
                        cout << "masukan jumlah tiket yang ingin dibeli" << endl;
                        cout << "JUMLAH = ";cin >> ticket;
                    }
                    
            }else {
                cout << "Pilihan yang anda masukan salah,silakan ulangi" << endl;
            }

    }else if (age > 12,age <= 16)
    {
        cout << "FILM YANG DAPAT DIPILIH ADALAH FILM REMAJA" << endl;
        cout << "============BERIKUT LIST FILM================" << endl;
        cout << "01.tom & jerry the movie\n02.the adventur of tintin\n03.doraemon last movie" << endl;
        cout << "04.Spiderman far from home\n05.the avenger end game\n06.black hawk dawn" << endl;
        cout << "Masukan pilihan anda dengan memasukan nomor urut film yang anda pilih" << endl;
        cin >> option;
            if (option = 01 || 02 || 03 || 04 || 05 || 06){
                cout << "Pilih jadwal untuk menonton" << endl;
                cout << "01. 08.00 AM\n02. 02.00 PM\n03.08.00 PM" << endl;
                cout << "Pilih jadwal sesuai dengan memasukan nomor list daftar" << endl;
                cin >> schedule;
                    if (schedule = 01 || 02 || 03)
                    {
                        cout << "masukan jumlah tiket yang ingin dibeli" << endl;
                        cout << "JUMLAH = ";cin >> ticket;
                    }
            }else {
                cout << "Pilihan yang anda masukan salah,silakan ulangi" << endl;
            }

    }else if (age > 16) 
    {
        cout << "FILM YANG DAPAT DIPILIH ADALAH FILM REMAJA" << endl;
        cout << "============BERIKUT LIST FILM================" << endl;
        cout << "01.tom & jerry the movie\n02.the adventur of tintin\n03.doraemon last movie" << endl;
        cout << "04.Spiderman far from home\n05.the avenger end game\n06.black hawk dawn" << endl;
        cout << "07.the titanic\n08.no time to die\n09.fast and furious 9" << endl;
        cout << "Masukan pilihan anda dengan memasukan nomor urut film yang anda pilih" << endl;
        cin >> option;
            if (option = 01 || 02 || 03){
                cout << "Pilih jadwal untuk menonton" << endl;
                cout << "01. 08.00 AM\n02. 02.00 PM\n03.08.00 PM" << endl;
                cout << "Pilih jadwal sesuai dengan memasukan nomor list daftar" << endl;
                cin >> schedule;
                    if (schedule = 01 || 02 || 03)
                    {
                        cout << "masukan jumlah tiket yang ingin dibeli" << endl;
                        cout << "JUMLAH = ";cin >> ticket;
                    }
            }else {
                cout << "Pilihan yang anda masukan salah,silakan ulangi" << endl;
            }

    }else {
        cout <<"kode yang anda masukan salah" << endl;
    }
    
}