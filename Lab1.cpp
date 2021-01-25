

#include <iostream>
using namespace std;
int main()
{
	double boolis = sizeof(bool),
		charis = sizeof(char),
		shortintis = sizeof(short int),
		Integeris = sizeof(int),
		floatis = sizeof(float),
		longintis = sizeof(long int),
		doubleis = sizeof(double),
		longlongintis = sizeof(long long int),
		stringis = sizeof(string);


	cout << "The Size of the " << "bool: " << boolis << "\n";
	cout << "The Size of the " << "char: " << charis << "\n";
	cout << "The Size of the " << "short int: " << shortintis << "\n";
	cout << "The Size of the " << "Integer: " << Integeris << endl;
	cout << "The Size of the " << "float: " << floatis << "\n";
	cout << "The Size of the " << "long int: " << longintis << "\n";
	cout << "The Size of the " << "double: " << doubleis << "\n";
	cout << "The Size of the " << "long long int: " << longlongintis << "\n";
	cout << "The Size of the " << "string: " << stringis << "\n\n";
	
	cout << "Adding Integer and float= " << Integeris + floatis << endl;
	cout << "Multiplying double and short int= " << doubleis * shortintis << endl;
	cout << "Dividing long int by long long int= " << longintis / longlongintis << endl;
	cout << "Modulus of string over bool= " << (int)stringis %(int)boolis  << endl;
	cout << "Subtracting char from float= " << charis - floatis << endl;
	
	

	return 0;






}


