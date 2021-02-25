/*
 * CGame.
 * A C Game Engine.
 * 
 * Copyright (C) 2021, Ty Gillespie. All rights reserved.
 * MIT License.
 */

#ifndef CGAME_H
#define CGAME_H

#include<stdlib.h>
#include <time.h>

int initialized = 0;

int cgame_initialize();
int cgame_randInt(int min, int max);
double cgame_areaOfSquare(double sideLength);
double cgame_areaOfRectangle(double length, double width);
double cgame_areaOfTriangle(double length, double width);

int cgame_initialize()
{
	if (initialized == 1)
	{
		return 0;
	}
	srand(time(NULL));
	initialized = 1;
	return 1;
}

int cgame_randInt(int min, int max)
{
	int theNumber = (rand() % (max - min + 1)) + min;
	return theNumber;
}

double cgame_areaOfSquare(double sideLength)
{
	// All sides of a square will be the same, so just multiply the side length times itself.
	return sideLength * sideLength;
}

double cgame_areaOfRectangle(double length, double width)
{
	// Simply use the area formula (area = length * width) here.
	return length * width;
}

double cgame_areaOfTriangle(double length, double width)
{
	// We simply use the area formula (length * width) here, but divide it by two because the shape we're dealing with is a triangle.
	return (length * width) / 2;
}

#endif // CGAME_H
