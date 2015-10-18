/*
 * player.h
 *
 *  Created on: Oct 12, 2015
 *      Author: jared
 */

#ifndef SOURCE_HEADERS_PLAYER_H_
#define SOURCE_HEADERS_PLAYER_H_

#include "animatedsprite.h"
#include "globals.h"
#include "slope.h"

class Graphics;

class Player : public AnimatedSprite {
public:
	Player();
	Player(Graphics &graphics, Vector2 spawnPoint);
	void draw(Graphics &graphics);
	void update(float elapsedTime);

	/* void moveLeft
	 * Moves the player left by -dx
	 */
	void moveLeft();

	/* void moveRight
	 * Moves the player right by dx
	 */
	void moveRight();

	/* void stopMoving
	 * Stops moving the player
	 */
	void stopMoving();

	/* void jump
	 * Jumps
	 */
	void jump();

	virtual void animationDone(std::string currentAnimation);
	virtual void setupAnimations();

	/* void handleTileCollisions
	 * handles collisions with all tiles the player is colliding with
	 */
	void handleTileCollisions(std::vector<Rectangle> &others);

	/* void handleSlopeCollisions
	 * Handles collisions with all slopes the player is colliding with
	 */
	void handleSlopeCollisions(std::vector<Slope> & others);

	const float getX() const;
	const float getY() const;
private:
	float _dx, _dy;

	Direction _facing;

	bool _grounded;
};



#endif /* SOURCE_HEADERS_PLAYER_H_ */
