#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    string SaveText;
    char ShowTheSaveData;
    ifstream Haiku;

    Haiku.open("haiku.txt");

    if (!Haiku) { cout << "Haiku.txt has not been loaded\n"; }
    if (Haiku) { cout << "Haiku.txt has been succesfully loaded\n"; }

    Haiku.close();
    cout << "Do you wish to see the Save Data?(y/n)\n";
    cin >> ShowTheSaveData;

    if (ShowTheSaveData == 'y' || ShowTheSaveData == 'Y') {
        Haiku.open("Haiku.txt");

        while (!Haiku.eof())
        {
            Haiku >> SaveText;
            cout << SaveText << endl;
        }

        Haiku.close();
    }

    return 0;




}
