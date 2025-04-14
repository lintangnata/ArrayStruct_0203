#include <iostream>
#include <string>
using namespace std;

struct Skill
{
    string skill1;
    string skill2;
    string skill3;
};


struct Hero {
    string Nama;
    string Role;
    string Tipe;
    Skill skill;
};

int main()
{
    Hero arhero[3];
    for(int i = 0; i < 3; i++)
    {
        cout << "Hero ke-" << i+1 << endl;
        cout << "Masukkan Nama Hero = ";
        getline(cin, arhero[i].Nama);
        cout << "Masukkan Role Hero = ";
        getline(cin, arhero[i].Role);
        cout << "Masukkan Tipe Hero = ";
        cin >> arhero[i].Tipe;
        cin.ignore();

        cout << "Masukkan Skill 1 = ";
        getline(cin, arhero[i].skill.skill1);
        cout << "Masukkan Skill 2 = ";
        getline(cin, arhero[i].skill.skill2);
        cout << "Masukkan Skill 3 = ";
        getline(cin, arhero[i].skill.skill3);
    }

    cout << endl;
    cout << "Tampilkan Hero = " << endl;
    cout << endl;

    for(int i = 0; i < 3; i++)
    {
        cout << "Hero ke-" << i+1 << endl;
        cout << "Nama Hero = " << arhero[i].Nama << endl;
        cout << "Role Hero = " << arhero[i].Role << endl;
        cout << "Tipe Hero = " << arhero[i].Tipe << endl;

        cout << "Skill 1 = " << arhero[i].skill.skill1 << endl;
        cout << "Skill 2 = " << arhero[i].skill.skill2 << endl;
        cout << "Skill 3 = " << arhero[i].skill.skill3 << endl;
    }
}