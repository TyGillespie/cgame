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
	cgame_initialize();
	for (int i = 0; i < 10; i++)
	{
		int rng = cgame_randInt(1, 10);
		printf("Random number = %d\n", rng);
	}
	printf("The area of a 3 by 3 square is: %f", cgame_areaOfSquare(3));
	printf("The area of a 3 by 5 rectangle is: %f", cgame_areaOfRectangle(3, 5));
	printf("The area of a 4 by 4 triangle is: %f", cgame_areaOfTriangle(4, 4));
	return 0;
}
