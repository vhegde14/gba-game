#ifndef MAIN_H
#define MAIN_H

#include "gba.h"

// TODO: Create any necessary structs

/*
* For example, for a Snake game, one could be:
*
* struct snake {
*   int heading;
*   int length;
*   int row;
*   int col;
* };
*
* Example of a struct to hold state machine data:
*
* struct state {
*   int currentState;
*   int nextState;
* };
*
*/

struct player {
    int width;
    int height;
    int xPos;
    int yPos;
    int score;
    int hasKey;
    int hitBomb;
} player1;

void initalizeItems(void);

int checkCollision(int x, int y);

int updateGameplay(void);

#endif
