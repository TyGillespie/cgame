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

int randInt(int min, int max);

int randInt(int min, int max)
{
	// Todo: find a better way of generating random numbers.
	srand(time(NULL));
	int theNumber = (rand() % (max - min + 1)) + min;
	return theNumber;
}

#endif
