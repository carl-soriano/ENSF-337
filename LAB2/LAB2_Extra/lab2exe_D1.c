/*
 *
 * lab2exe_D1.c
 * ENSF 337 - Lab 2 - Execise D PART 1
 */

#include <stdio.h>

void foo(int *a, int *b);

int main(void)
{
  int x = 1000;
  int y = 2000;
  int *p;
  p = &y;
  foo(p, &x);
  printf("x is %d, y is %d.\n", x, y);
  return 0;
}

void foo(int *a, int *b)
{
  *a += 10;
  *b += 20;
 
  /* point one */

  *b += 1;
}
