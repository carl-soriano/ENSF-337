/*
 *  File: lab2exe_B.c
 *  ENSF 337 - Lab 2 Exercise B
 *  Created by M. Moussavi
 *  NOTE:
 *   The program doesn't do anything useful and doesn't display any output on the screen.
 *   It is just an exercise for understanding the subject of "Activation Records". 
 *   It shows how C functions and their variables become activated or deactivate.
 */

#include <stdio.h>

int foo (int);
int jupiter(int, int);
int mercury(int, int);


int main(void)
{
    int x = 2, y =4, z = 10;
    y = foo(y);
    y = -4 + jupiter(x, z) * 2 ;
    // Point 3
    return 0;
}

int mercury(int m, int n)
{
    int t;
    t = m + 2 * n;
    // Point 1
    return t;
}


int jupiter(int i, int j)
{
    int d = j;
    d = mercury(i % 400, i);
    // Point 2
    return d;
}


int foo(int x)
{
    int y = x;
    x = y * 2;
    return x;
}


