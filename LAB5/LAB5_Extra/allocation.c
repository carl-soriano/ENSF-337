// allocation.c
// ENSF 337 Fall 2022 Lab 5 Exercise A
#include <stdio.h>
#include <stdlib.h>
char c[4];
void string_copy(char *dest, const char *source);

int main()
{
  const char *a = "abc";
  char b[] = "def";

  char *p;
  p = malloc(4);
  
  // point one

  string_copy(c, a);
  a = b;
  string_copy(p, a);

  return 0;
}

void string_copy(char *dest, const char *source)
{
  while(1) {
    *dest = *source;
    if (*source == '\0')
      break;
    dest++;
    source++;
  }

  // point two

  return;
}

