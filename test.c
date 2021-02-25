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
		printf("%d\n", rng);
	}
	return 0;
}
