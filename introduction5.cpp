#include <iostream>
using namespace std;

int main ()
{

    cout << "Menghitung luas segitiga" << endl;

    int luas, alas , tinggi;

    cout << "alas segitiga:";
    cin >> alas;

    cout << "tinggi segitiga:";
    cin >> tinggi;


    //Penghitung
    luas = 0.5 * alas * tinggi;

    //Hasil
    cout << "Hasilnya Adalah:" << luas << endl;
}