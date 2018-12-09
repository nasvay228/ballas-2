#include "player.h"

player::player()
{
    x = y = 0;
}

void player::draw(QPainter &painter)
{
    painter.drawPixmap(x, y, 300, 100, QPixmap(":/files/images/pudge.jpeg"));
}

void player::peoples_move(int x, int y)
{
    this->x += x;
    this->y += y;
}
