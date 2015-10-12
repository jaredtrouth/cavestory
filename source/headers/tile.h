/*
 * tile.h
 *
 *  Created on: Oct 12, 2015
 *      Author: jared
 */

#ifndef SOURCE_HEADERS_TILE_H_
#define SOURCE_HEADERS_TILE_H_

#include "globals.h"

class Graphics;
struct SDL_Texture;

class Tile {
public:
	Tile();
	Tile(SDL_Texture* tileset, Vector2 size, Vector2 tilesetPosition, Vector2 position);
	void update(int elapsedTime);
	void draw(Graphics &graphics);

private:
	SDL_Texture* _tileset;
	Vector2 _size;
	Vector2 _tilesetPosition;
	Vector2 _position;
};




#endif /* SOURCE_HEADERS_TILE_H_ */
