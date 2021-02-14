// HaikuNANI.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	int syllable;
	fstream Haiku;

	ofstream outfile("haiku.txt");

	Haiku.open("haiku.txt");

	if (!Haiku) { cout << "Haiku.txt has not been created\n"; }
	if (Haiku) { cout << "Haiku.txt has been succesfully created\n"; }
	cout << "How many syllable do want\n";
	cin >> syllable;
	for (int i = 0; i < syllable; i++) {
		
		Haiku << "syllable" << i + 1;

		if (i < (syllable - 1)) {
			Haiku << endl;
		}

	}
	Haiku.close();


	return 0;




}

