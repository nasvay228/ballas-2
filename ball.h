#ifndef BALL_H
#define BALL_H
#include <QtGui>
#include <QPainter>

class ball
{
    int schet;
    int x;
    int y;
    int vx, vy;
    int r;
    QColor color;

public:
    ball(int w,int h);
    void move(int w, int h);
    void draw(QPainter& painter);
    bool intersects(ball * enemy);
    void revers();
};

#endif // BALL_H
