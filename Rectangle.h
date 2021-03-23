#pragma once
class RectangleC
{
public:
	double Lenght, Width;
	bool SetLenght(double);
	bool SetWidth(double);


	//double GetLenght() { return Lenght; }
	//double GetWidth() { return Width; }
	double GetArea() {return Lenght * Width;}
	double GetPerimeter() {	return 2 * (Lenght + Width);}

};