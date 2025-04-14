#include <iostream>
using namespace std;

struct Hero{
    string Nama;
    string Role;
    string Tipe;
};

int main()
{
    Hero arhero;

    cout << "Masukkan Nama Hero = ";
    cin >> arhero.Nama;
    cout << "Masukkan Role Hero = ";
    cin >> arhero.Role;
    cout << "Masukkan Tipe Hero = ";
    cin >> arhero.Tipe;

    cout << endl;
    cout << "Tampilkan Hero = " << endl;
    cout << endl;

    cout << "Nama Hero = " << arhero.Nama << endl;
    cout << "Role Hero = " << arhero.Role << endl;
    cout << "Tipe Hero = " << arhero.Tipe << endl;
}