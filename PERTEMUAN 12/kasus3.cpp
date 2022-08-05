#include <iostream>
using namespace std;

double nilaiAkhir(double aktif, double tugas, double kuis, double uts, double uas);

int main()
{
    string nama;
    int npm;
    int eror = 1;
    int y = 0;
    int x = 0;
    double totAM, IP;
    double N[10][5]; //untuk menampung nilai
    double NA[10];   // untuk menampung nilai akhir
    string HM[10];   //untuk menampung huruf mut
    float AM[10];    //untuk menampung angka mutu

    cout << "Nama : ";
    cin >> nama;
    cout << " NPM : ";
    cin >> npm;

    for (x = 0; x < 10; x++) //memasukkan nilai
    {
        if (x == 0)
        {
            cout << "Matkul PengLing" << endl;
        }
        else if (x == 1)
        {
            cout << "Matkul TekDig" << endl;
        }
        else if (x == 2)
        {
            cout << "Matkul PTI" << endl;
        }
        else if (x == 3)
        {
            cout << "Matkul ADP" << endl;
        }
        else if (x == 4)
        {
            cout << "Matkul Kalkulus" << endl;
        }
        else if (x == 5)
        {
            cout << "Matkul Indusper" << endl;
        }
        else if (x == 6)
        {
            cout << "Matkul PraktADP" << endl;
        }
        else if (x == 7)
        {
            cout << "Matkul PBI" << endl;
        }
        else if (x == 8)
        {
            cout << "Matkul Pend. Pancasila" << endl;
        }
        else if (x == 9)
        {
            cout << "Matkul PEK" << endl;
        }

        while (y < 5)
        {

            //keaktifan
            while (eror == 1)
            {
                cout << "Nilai keaktifan : ";
                cin >> N[x][y];

                if (0 >= N[x][y] && N[x][y] <= 85)
                {
                    cout << "Nilai dimasukkan" << endl
                        << endl;
                    y++;
                    break;
                }
                else
                {
                    cout << "Masukkan nilai dengan benar" << endl;
                }
            }
            //tugas
            while (eror == 1)
            {
                cout << "Nilai tugas : ";
                cin >> N[x][y];

                if (0 <= N[x][y] && N[x][y] <= 85)
                {
                    cout << "Nilai dimasukkan" << endl
                        << endl;
                    y++;
                    break;
                }
                else
                {
                    cout << "Masukkan nilai dengan benar" << endl;
                }
            }
            //kuis
            while (eror == 1)
            {
                cout << "Nilai kuis : ";
                cin >> N[x][y];

                if (0 <= N[x][y] && N[x][y] <= 85)
                {
                    cout << "Nilai dimasukkan" << endl
                        << endl;
                    y++;
                    break;
                }
                else
                {
                    cout << "Masukkan nilai dengan benar" << endl;
                }
            }
            //uts
            while (eror == 1)
            {
                cout << "Nilai UTS : ";
                cin >> N[x][y];

                if (0 <= N[x][y] && N[x][y] <= 85)
                {
                    cout << "Nilai dimasukkan" << endl
                        << endl;
                    y++;
                    break;
                }
                else
                {
                    cout << "Masukkan nilai dengan benar" << endl;
                }
            }
            //uas
            while (eror == 1)
            {
                cout << "Nilai UAS : ";
                cin >> N[x][y];

                if (0 <= N[x][y] && N[x][y] <= 85)
                {
                    cout << "Nilai dimasukkan" << endl
                        << endl;
                    y++;
                    break;
                }
                else
                {
                    cout << "Masukkan nilai dengan benar" << endl;
                }
            }
        }
        y = 0;
    }

    for (int i = 0; i < 10; i++) //menghitung nilai akhir menggunakan fungsi
    {
        NA[i] = nilaiAkhir(N[i][0], N[i][1], N[i][2], N[i][3], N[i][4]);
        //HURUF MUTU
        if (76 <= NA[i] && NA[i] <= 85)
        {
            HM[i] = "A";
        }
        else if (71 <= NA[i] && NA[i] < 76)
        {
            HM[i] = "B+";
        }
        else if (66 <= NA[i] && NA[i] < 71)
        {
            HM[i] = "B";
        }
        else if (61 <= NA[i] && NA[i] < 66)
        {
            HM[i] = "C+";
        }
        else if (55 <= NA[i] && NA[i] < 61)
        {
            HM[i] = "C";
        }
        else if (50 <= NA[i] && NA[i] < 55)
        {
            HM[i] = "D";
        }
        else if (NA[i] < 50)
        {
            HM[i] = "E";
        }
        //ANGKA MUTU
        if (HM[i] == "A")
        {
            AM[i] = 4;
        }
        else if (HM[i] == "B+")
        {
            AM[i] = 3.5;
        }
        else if (HM[i] == "B")
        {
            AM[i] = 3;
        }
        else if (HM[i] == "C+")
        {
            AM[i] = 2.5;
        }
        else if (HM[i] == "C")
        {
            AM[i] = 2;
        }
        else if (HM[i] == "D")
        {
            AM[i] = 1;
        }
        else if (HM[i] == "E")
        {
            AM[i] = 0;
        }
        //mencari ip
        totAM += AM[i];
    }
    IP = totAM / 10;
    cout << "============================" << endl
        << "Nama : " << nama << endl
        << "NPM : " << npm << endl
        << "IP : " << IP << endl;
}

//fungsi menghitung nilai akhir
double nilaiAkhir(double aktif, double tugas, double kuis, double uts, double uas)
{
    double basket1 = (aktif * 0.1) + (tugas * 0.35) + (kuis * 0.15) + (uts * 0.2) + (uas * 0.2);
    return basket1;
}