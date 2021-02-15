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
	// Todo: find a better way of generating random numbers.
	int theNumber = (rand() % (max - min + 1)) + min;
	return theNumber;
}

#endif
