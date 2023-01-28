/*
 *
 * lab2exe_D2.c
 * ENSF 337, Lab 2 - Execise D - PART 2
 */

#include <stdio.h>

void bar(int *a, int *b);

void quux(int *p, int *q);

int main(void)
{
  int x = 500, y = 600;
  quux(&x, &y);
  printf("x is %d, y is %d.\n", x, y);
  return 0;
}

void bar(int *a, int *b)
{
  *a += 3;
  *b += 4;
  
  /* point one */
  
  printf("*a is %d, *b is %d.\n", *a, *b);
}

void quux(int *p, int *q)
{
  int n;
  n = *p;
  bar(&n, q);
  printf("*p is %d, *q is %d.\n", *p, *q);
}
