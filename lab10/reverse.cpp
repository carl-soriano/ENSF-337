//  reverse.cpp
//  Demonstrates a recursive function for printing a string in reverse.
//
// ENSF 337  - LAB 10

#include <iostream>
using namespace std;

void print_backwards(const char *s);
//  REQUIRES: s points to first char of a string.
//  PROMISES: chars in string are printed from last to first.

int main()
{
  const char *p = "AEIOU";

  cout << "\"" << p << "\" printed backwards is \"";
  print_backwards(p);
  cout << "\".\n";

  return 0;
}

void print_backwards(const char *s)
{
  // point one

  if (*s != '\0') {
    print_backwards(s + 1);
    cout << *s;
  }
}
