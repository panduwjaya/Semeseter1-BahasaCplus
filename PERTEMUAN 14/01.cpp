#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream instream;
    ofstream outstream;

    instream.open ("IPK.dat");
    outstream.open ("IPK3.dat");
    string namaMahasiswa;
    float IPK;
    int n = 0;

    while (!instream.eof())
    {
        n++;
        instream >> IPK;
        if (IPK >= 3) {
            outstream << IPK << endl;
        }
    }

    if (n == 0)
    {
        cout << "File Kosong";
    }
    instream.close();
    outstream.close();
    return 0;
}