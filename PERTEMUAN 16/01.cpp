#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main() {
    time_t now = time(0);
    char *wt = ctime(&now);

    int n;
    string haridl,catatan;
    ofstream outFile;

    cout << "Masukan Jumlah Catatan Untuk berapa Hari: "; cin >> n;
    outFile.open("NOTE.txt");
    if (outFile.is_open()) {
        for (int i = 1; i <= n; i++) {
            cin.ignore();
            cout << "Masukan Hari&tanggal Deadline: ";
            getline(cin, haridl);
            cout << "Masukan catatan Pengingat: ";
            getline(cin, catatan);
            
            outFile << "=========================================" << endl;
            outFile << "Dibuat pada\t: " << wt;
            outFile << "Deadline Hari\t: " << haridl << endl;
            outFile << "=========================================" << endl;
            outFile << "Catatan Pengingat: \n" << catatan << endl << endl;
        }
        system("START /MIN NOTEPAD /P NOTE.txt");
    } else
        cout << "Can't open the Data.txt file ." << endl;
    
    return 0;
}