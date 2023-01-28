/* lab3exe_C.c
 * ENSF 337, Lab 3 Exercise C
 */

#include <stdio.h>
#include <string.h>

int foo(const char *s1, int ch, char* s2);
void bar(const char *x, char *y, char c, int n, int *m);

int main(void)
{
    const char* str1 = "Banana Bread";
    char str2[8];
    unsigned long int n1 = strlen(str1);
    int n2 = sizeof(str1);
    
    printf("str1 is %d bytes, and its length is %lu\n", n2, n1);
    int c = 'a';
    foo(str1, c, str2);
    
    return 0;
}

int foo(const char *s1, int ch, char* s2)
{
    int i, j;
    for(i = 0, j=0; s1[i] && j <7; i++) {
        bar(s1, s2, ch, i, &j );
        
    }
    s2[j] = '\0';
    // point two
    return 0;
}

void bar(const char *x, char *y, char c, int n, int *m) {
    if(x[n] != c) {
        y[*m] = x[n];
        (*m)++;
        // point one - when program reaches this point for the first time
    }
}
