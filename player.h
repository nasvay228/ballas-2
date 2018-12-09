#ifndef PLAYER_H
#define PLAYER_H
#include <QPainter>


class player

{
public:
    int x;
    int y;
    player();


    void draw(QPainter& painter);
    void peoples_move(int x, int y);
};

#endif // PLAYER_H
