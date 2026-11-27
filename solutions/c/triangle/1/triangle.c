#include "triangle.h"

double is_triangle(triangle_t t)
{
    if (t.a + t.b >= t.c && t.b + t.c >= t.a && t.a + t.c >= t.b
        && t.a != 0 && t.b != 0 && t.c != 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

double is_equilateral(triangle_t t)
{
    if (is_triangle(t))
    {
        if (t.a == t.b && t.b == t.c && t.c == t.a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

double is_isosceles(triangle_t t)
{
    if (is_triangle(t))
    {
        if ((t.a == t.b) ||
            (t.b == t.c)  ||
            (t.c == t.a))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

double is_scalene(triangle_t t)
{
    if (is_triangle(t))
    {
        if (t.a != t.b && t.b != t.c && t.c != t.a)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
}