#include <iostream>
#include "Rectangle.h"
#include <Windows.h>
using namespace std;

int main() 
{
	RectangleC Rect;
	double RectW, RectL;
	bool Calculate = true;
	string Rest;
	cout << "This Program helps you to calculate the Area & Perimeter" << endl;
	Sleep(1000);
	do {
		cout << "Aquire me with the Width " << endl;
		cin >> RectL;
		cout << "And Lenght " << endl;
		cin >> RectW;
		Sleep(800);
		if (!Rect.SetLenght(RectW)) {
			cout << "Math Error Length" << endl;
		}
		else if (!Rect.SetWidth(RectL)) {
			cout << "Math Error Widths" << endl;
		}
		else {
			Sleep(800);
			cout << "Here is your request: " << endl;
			cout << "Your Area is : " << Rect.GetArea() << endl;
			Sleep(200);
			cout << "Your Perimeter is : " << Rect.GetPerimeter() << endl;
		}
		Sleep(1000);
		cout << "Do you wish to restart the process?Y/N" << endl;
		cin >> Rest;
		if (Rest == "Y" || Rest == "y") {
			Calculate = true;
		}
		else { Calculate = false; }
	} while (Calculate);

	return 0;

};
