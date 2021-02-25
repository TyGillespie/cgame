/*
 * CGame.
 * A C Game Engine.
 * 
 * Copyright (C) 2021, Ty Gillespie. All rights reserved.
 * MIT License.
 */

#include <stdio.h>
#include "cgame.h"

int main()
{
	initialize();
	for (int i = 0; i < 10; i++)
	{
		int rng = randInt(1, 10);
		printf("Random number = %d\n", rng);
	}
	printf("The area of a 3 by 3 square is: %f", areaOfSquare(3));
	printf("The area of a 3 by 5 rectangle is: %f", areaOfRectangle(3, 5));
	printf("The area of a 4 by 4 triangle is: %f", areaOfTriangle(4, 4));
	return 0;
}
