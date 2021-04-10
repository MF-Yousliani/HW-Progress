// GAME1001_A2_Yousliani.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <iomanip>

using namespace std;


int Money = 10000;

struct WeaponInfo
{
    string WeaponName;
    string SoundEffect;
    int Ammo;
    int Price;
    int GunCode;


    WeaponInfo()
    {
        WeaponName = "Empty";
        SoundEffect = "Empty";
        Ammo = 0;
        Price = 0;
        GunCode = 0;
    }

};


WeaponInfo Gun01() {
    WeaponInfo Gun;
    Gun.WeaponName = "Ray";
    Gun.SoundEffect = "BEEP";
    Gun.Ammo = 30;
    Gun.Price = 450;
    Gun.GunCode = 1;

    return Gun;
}

WeaponInfo Gun02() {
    WeaponInfo Gun;
    Gun.WeaponName = "Rocket";
    Gun.SoundEffect = "Boof";
    Gun.Ammo = 5;
    Gun.Price = 1500;
    Gun.GunCode = 2;
    return Gun;
}
WeaponInfo Gun03() {
    WeaponInfo Gun;
    Gun.WeaponName = "Desolator";
    Gun.SoundEffect = "GOOSH";
    Gun.Ammo = 65;
    Gun.Price = 3600;
    Gun.GunCode = 3;
    return Gun;
}
WeaponInfo Gun04() {
    WeaponInfo Gun;
    Gun.WeaponName = "Tide";
    Gun.SoundEffect = "OOF";
    Gun.Ammo = 10;
    Gun.Price = 200;
    Gun.GunCode = 4;
    return Gun;
}
WeaponInfo Gun05() {
    WeaponInfo Gun;
    Gun.WeaponName = "Tango";
    Gun.SoundEffect = "Kham.Kham";
    Gun.Ammo = 3;
    Gun.Price = 90;
    Gun.GunCode = 5;
    return Gun;
}



struct Inventory
{
    string One, Two, Three;
    bool OneFree, TwoFree, ThreeFree;
    int OnceCode, TwoCode, ThreeCode;
    Inventory()
    {
        One = "Empty";
        Two = "Empty";
        Three = "Empty";
        OnceCode = 0;
        TwoCode = 0;
        ThreeCode = 0;
        OneFree = true;
        TwoFree = true;
        ThreeFree = true;
    }

};
Inventory Slots;

void Buying() {
    WeaponInfo Weapons;
    int Request;
    cout << "What item do you want to buy ? " << endl;

    for (int i = 0; i < 5; i++)
    {
        if (i == 0) {
            Weapons = Gun01();
        }
        if (i == 1) {
            Weapons = Gun02();
        }
        if (i == 2) {
            Weapons = Gun03();
        }
        if (i == 3) {
            Weapons = Gun04();
        }
        if (i == 4) {
            Weapons = Gun05();
        }

        cout << "Weapon " << Weapons.GunCode << " Name :  " << Weapons.WeaponName << " Price :  " << Weapons.Price << endl;
    }

    cin >> Request;

    if (Request == 1) {
        Weapons = Gun01();

    }
    else if (Request == 2) {
        Weapons = Gun02();

    }
    else if (Request == 3) {
        Weapons = Gun03();

    }
    else if (Request == 4) {
        Weapons = Gun04();

    }
    else if (Request == 5) {
        Weapons = Gun05();

    }




    if (Money > Weapons.Price)
    {
        if (Weapons.GunCode == Slots.OnceCode || Weapons.GunCode == Slots.TwoCode || Weapons.GunCode == Slots.ThreeCode) {

            cout << endl << "You already have this weapon." << endl;

        }
        else
        {
            if (Slots.OneFree == true) {
                Money = Money - Weapons.Price;
                Slots.One = Weapons.WeaponName;
                Slots.OnceCode = Weapons.GunCode;
                Slots.OneFree = false;
                cout << endl << "your purchase has been complete!!!" << endl;
            }
            else if (Slots.TwoFree == true) {
                Money = Money - Weapons.Price;
                Slots.Two = Weapons.WeaponName;
                Slots.TwoCode = Weapons.GunCode;
                Slots.TwoFree = false;
                cout << endl << "your purchase has been complete!!!" << endl;
            }
            else if (Slots.ThreeFree == true) {
                Money = Money - Weapons.Price;
                Slots.Three = Weapons.WeaponName;
                Slots.ThreeCode = Weapons.GunCode;
                Slots.ThreeFree = false;
                cout << endl << "your purchase has been complete!!!" << endl;
            }
            else
            {
                cout << endl << "You have no free slot to buy." << endl;
            }
        }




    }
    else
    {
        cout << endl << "You have no money." << endl;
    }



}
void Selling() {

}
void Moving() {

}









void Shop() {
    WeaponInfo Weapons;
    int Request = 0;
    do {
        cout << endl;
        cout << "___________________________________" << endl;
        cout << "Shop >>" << endl;
        cout << "___________________________________" << endl;
        cout << endl;
        cout << "Buy Item = 1" << endl;
        cout << "Sell Items = 2" << endl;
        cout << "WeaponList = 3" << endl;
        cout << "ShowMyMoney = 4" << endl;
        cout << "Exit the shop press = 5" << endl;
        cin >> Request;

        if (Request == 0) {
            cout << "Ok..Nothing to do..." << endl;
        }
        else if (Request == 1)
        {
            Buying();
        }
        else if (Request == 2)
        {
            cout << endl << "Sorry...Selling is not available yet." << endl;
        }
        else if (Request == 3)
        {
            for (int i = 0; i < 5; i++)
            {
                if (i == 0) {
                    Weapons = Gun01();
                }
                if (i == 1) {
                    Weapons = Gun02();
                }
                if (i == 2) {
                    Weapons = Gun03();
                }
                if (i == 3) {
                    Weapons = Gun04();
                }
                if (i == 4) {
                    Weapons = Gun05();
                }

                cout << "Weapon " << Weapons.GunCode << " Name :  " << Weapons.WeaponName << " Price :  " << Weapons.Price << endl;
            }
        }
        else if (Request == 4)
        {
            cout << endl << "Your Money is : " << Money << endl;
        }
        else
        {
            cout << endl << "You dident choose the right number." << endl;
        }
    } while (Request != 5);

}


int main()
{

    int Request = 0;
    WeaponInfo Weapons;




    do {

        cout << endl;
        cout << "___________________________________" << endl;
        cout << "MainMenu >>" << endl;
        cout << "___________________________________" << endl;
        cout << endl;
        cout << "Enter the shop press = 1" << endl;
        cout << "Show your inventory = 2" << endl;
        cout << endl;
        cout << "ExitGame = 3" << endl;
        cin >> Request;
        cout << endl;
        if (Request == 0) {
            cout << "Ok..Nothing to do..." << endl;
        }
        else if (Request == 1)
        {
            Shop();
        }
        else if (Request == 2)
        {
            cout << "Your items : " << endl << endl;
            cout << "Slot 1 : " << Slots.One << endl;
            cout << "Slot 2 : " << Slots.Two << endl;
            cout << "Slot 3 : " << Slots.Three << endl;
        }
        else if (Request == 3)
        {
            cout << "Thank you for playing this game :D..." << endl;
        }
        else
        {
            cout << endl << "You dident choose the right number." << endl;
        }
    } while (Request != 3);

    return 0;
}