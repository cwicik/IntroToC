#include <stdio.h>
#include <math.h>
#include "main.h"

void MamasEmpire(size_t period)
{
  for (size_t i = 1; i <= period; i++)
  {
    printf("Mamas %d Empire!\n", i);
  }
}

int Fibo(size_t n)
{
  if (n <= 2)
  {
    return 1;
  }
  return Fibo(n - 1) + Fibo(n - 2);
}

double DistanceFromOrigin(point p)
{
  return sqrt(pow(p.x, 2) + pow(p.y, 2));
}

point FurthestFromOrigin(point p1, point p2)
{
  if (DistanceFromOrigin(p1) < DistanceFromOrigin(p2))
  {
    return p2;
  }
  return p1;
}

double RectangleArea(rectangle rec)
{
  return rec.width * rec.height;
}

rectangle BiggerRectangle(rectangle rec1, rectangle rec2)
{
  if (RectangleArea(rec1) < RectangleArea(rec2))
  {
    return rec2;
  }
  return rec1;
}

int RectangleCanFit(rectangle rec1, rectangle rec2)
{
  return (rec1.width >= rec2.width) && (rec1.height >= rec2.height);
}

int get_fib_index(int n)
{
	int firstValue = 0;
	int secondValue = 1;

  size_t i = 1;
	for (i; secondValue < n; i++) 
  {
		int nextValue = firstValue + secondValue;
		firstValue = secondValue;
    secondValue = nextValue;
	}

	if (secondValue == n) 
  {
		return i;
  }
  return -1;
}

int SquareRoot(double n)
{
	size_t i = 1;

	for (i; i * i <= n; i++) 
  {
  }
	
	return i - 1;
}

int main()  
{
  //1
  MamasEmpire(53);

  //2
  printf("%d\n", Fibo(6));

  //3
  struct point p1;
  p1.x = 2;
  p1.y = 2;

  struct point p2 = {3, 3};

  point furthestPoint = FurthestFromOrigin(p1, p2);
  printf("(%.2f, %.2f)\n", furthestPoint.x, furthestPoint.y);

  //4
  rectangle* rec1 = malloc(sizeof(rectangle));
  (*rec1).width = 5;
  (*rec1).height = 4;

  rectangle* rec2 = malloc(sizeof(rectangle));
  (*rec2).width = 4;
  (*rec2).height = 3;
  rectangle biggerRectangle = BiggerRectangle((*rec1), (*rec2));
  printf("(%.2f, %.2f)\n", biggerRectangle.width, biggerRectangle.height);
  printf("%d\n", RectangleCanFit((*rec1), (*rec2)));

  //5
  printf("%d\n", get_fib_index(8)); 

  //6
  printf("%d\n", SquareRoot(25)); 

  return 0;
}