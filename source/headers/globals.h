/*
 * globals.h
 *
 *  Created on: Oct 11, 2015
 *      Author: jared
 */

#ifndef GLOBALS_H
#define GLOBALS_H

namespace globals{
	const int SCREEN_WIDTH = 640;
	const int SCREEN_HEIGHT = 480;

	const int SPRITE_SCALE = 2.0f;
}

struct Vector2 {
	int x, y;
	Vector2() :
		x(0), y(0)
	{}
	Vector2(int x, int y) :
		x(x), y(y)
	{}
	Vector2 zero() {
		return Vector2(0,0);
	}
};

#endif