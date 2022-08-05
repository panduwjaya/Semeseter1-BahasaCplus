#include <iostream>
#include <iomanip>
using namespace std;

char predikat (float nilai);

int main() {
    struct strMahasiswa {
        int npm;
        string nama;
        string kelas;
        float nilai;
    };
    struct strMahasiswa mahasiswa[100];
    int banyakMahasiswa;
    cout << "========================================\n";
    cout << "          Pendidikan Pancasila\n";
    cout << "========================================\n";
    cout << "Masukkan Banyak Mahasiswa: ";
    cin >> banyakMahasiswa;
    for (int i = 0; i < banyakMahasiswa; i++) {
        cout << "---------- Data Mahasiswa ";
        cout << setiosflags(ios::left) << setw(3) << i + 1 << " ----------\n";
        cout << "NPM\t: ";
        cin >> mahasiswa[i].npm;
        cin.ignore();
        cout << "Nama\t: ";
        getline(cin, mahasiswa[i].nama);
        cout << "Kelas\t: ";
        getline(cin, mahasiswa[i].kelas);
        cout << "Nilai\t: ";
        cin >> mahasiswa[i].nilai;
    }
    cout << "========================================\n";
    system("pause");
    system("cls");

    
    
    cout << "                          UPN \"Veteran\" Yogyakarta\n";
    cout << "                                 Daftar Nilai\n";
    cout << "                             Pendidikan Pancasila\n";
    cout << "---------------------------------------------------------------------------\n";
    cout << "No | NPM        | Nama                           | Kelas | Nilai | Predikat\n";
    cout << "---------------------------------------------------------------------------\n";
    for (int i = 0; i < banyakMahasiswa; i++) {
        cout << setiosflags(ios::left) << setw(2) << i + 1;
        cout << " | ";
        cout << setiosflags(ios::left) << setw(10) << mahasiswa[i].npm;
        cout << " | ";
        cout << setiosflags(ios::left) << setw(30) << mahasiswa[i].nama;
        cout << " | ";
        cout << setiosflags(ios::left) << setw(5) << mahasiswa[i].kelas;
        cout << " | ";
        cout << setiosflags(ios::left) << setw(5) << mahasiswa[i].nilai;
        cout << " | ";
        cout << setiosflags(ios::left) << setw(8) << predikat(mahasiswa[i].nilai) << endl;
    }
    cout << "---------------------------------------------------------------------------";
    cin.ignore();
    cin.get();
}

char predikat (float nilai) {
    char predikatAkhir;
    if (nilai < 4)
        predikatAkhir = 'E';
    else if (nilai >= 4 && nilai < 6)
        predikatAkhir = 'D';
    else if (nilai >= 6 && nilai < 7.5)
        predikatAkhir = 'C';
    else if (nilai >= 7.5 && nilai < 8.6)
        predikatAkhir = 'B';
    else if (nilai >= 8.6)
        predikatAkhir = 'A';
    return predikatAkhir;
}