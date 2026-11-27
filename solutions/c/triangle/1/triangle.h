#ifndef TRIANGLE_H
#define TRIANGLE_H

typedef struct {
   double a;
   double b;
   double c;
} triangle_t;

double is_triangle(triangle_t t);
double is_equilateral(triangle_t t);
double is_isosceles(triangle_t t);
double is_scalene(triangle_t t);

#endif
