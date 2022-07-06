#ifndef MAIN_H
#define MAIN_H

void MamasEmpire(size_t period);

int Fibo(size_t n);

typedef struct point point;
struct point
{
    double x;
    double y;
};

double DistanceFromOrigin(point p);

point FurthestFromOrigin(point p1, point p2);

typedef struct rectangle rectangle;
struct rectangle
{
    double width;
    double height;
};

double RectangleArea(rectangle rec);

rectangle BiggerRectangle(rectangle rec1, rectangle rec2);

int RectangleCanFit(rectangle rec1, rectangle rec2);

int get_fib_index(int n);

int SquareRoot(double n);

#endif