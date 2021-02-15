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
	int rng = cgame_randInt(1, 10);
	printf("The number is: %d", rng);
	return 0;
}
