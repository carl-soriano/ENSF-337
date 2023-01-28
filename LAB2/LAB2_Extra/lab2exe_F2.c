/*
 *
 * lab2exe_F2.c
 * ENSF 337 - Lab 2 - Execise F - Part II
 *  This program lets you examine the behaviour of simple scanf calls
 *  in response to input errors.
 */

#include <stdio.h>

int main(void)
{
  int i = 333;
  double d = 1234.5;
  int n;

  printf("Please enter an integer followed by a double: ");
  n = scanf("%d%lf", &i, &d);
  printf("n is %d.\n", n);
  printf("i is %d.\n", i);
  printf("d is %f.\n", d);

  return 0;
}
