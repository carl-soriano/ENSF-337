/* File: palindrome.c
 *  ENSF 337
 *  Exercise F - Lab 3
 *  Abstract: The program receives a string (one or more words) and indicates
 *  if the string is a palindrome or not. Plaindrome is a phrase that spells the
 *  same from both ends
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100


/* function prototypes*/
int is_palindrome (const char *str);
/* REQUIRES: str is pointer to a valid C string.
 * PROMISES: the return value is 1 if the string a is palindrome.*/


void strip_out(char *str);
/* REQUIRES: str points to a valid C string terminated with '\0'.
 * PROMISES: strips out any non-alphanumerical characters in str*/

int main(void)
{
    int p =0;
    char str[SIZE], temp[SIZE];
    
    fgets(str, SIZE, stdin);
    
    /* Remove end-of-line character if there is one in str.*/
    if (str[strlen(str) - 1] == '\n')
        str[strlen(str) - 1] = '\0';
    
    strcpy(temp,str);
    
    /* This loop is infinite if the string "done" never appears in the
     * input.  That's a bit dangerous, but OK in a test harness where
     * the programmer is controlling the input. */
    
    while(strcmp(str, "done") !=0) /* Keep looping unless str matches "done". */
    {
        
#if 1
        strip_out(str);
        
        p = is_palindrome(str);
#endif
        
        if(!p)
            printf("\n \"%s\" is not a palindrome.", temp);
        else
            printf("\n \"%s\" is a palindrome.", temp);
        
        fgets(str, SIZE, stdin);
        
        /* Remove end-of-line character if there is one in str.*/
        if(str[strlen(str) - 1] == '\n')
            str[strlen(str) - 1]= '\0';
        strcpy(temp, str);
    }
    
    return 0;
}



int is_palindrome (const char *str){
  
    
    int j = (lenght_str - 1);
    
    unsigned long int lenght_str = strlen(str);
    
    char comp_str[lenght_str];
    //Reversing str to another string
    for(int i = 0 ; i < lenght_str ; i++ , j--) {
        
        comp_str[i] = str[j];
        
        
    }
    //Checking if each letter matches with
    for (int i = 0 ; i < lenght_str; i++) {
        //If it doesn't, the whole function returns O
        if (comp_str[i] != str[i]) {
            
            return 0;
        }
        //If it doesn't return O after running through every letter, that means it is a palindrome
        return 1;
    }
}

    
void strip_out(char *str)
    {
        int j = 0;
        int length = strlen(str);
    
    for (int i = 0, i < (length); i++) {
            
            if(isalnum(((int)str[i]))) {
                
                if(isupper((int)str[i]))) {
                    str[j] = tolower(str[i]);
                    
                }
                else {
                    str[j] = str[i];
                }
                j++;
            }
        }
        str[j] = '\0'
   
    }
