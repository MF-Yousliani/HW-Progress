// GAME1001_LAB_07_YOUSLIANIMOHAMMADFARID.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
#include "Rectangle.h"
using namespace std;
double Width, Lenght;
bool RectangleC::SetLenght(double LenghtP)
{
	bool FineData = true;
	if (LenghtP >= 0.0) { Lenght = LenghtP; }
	else { FineData = false; }
	return FineData;
}
bool RectangleC::SetWidth(double WidthP)
{
	bool FineData = true;
	if (WidthP >= 0.0) { Width = WidthP; }
	else { FineData = false; }
	return FineData;
}