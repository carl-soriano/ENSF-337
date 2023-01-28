/*
* File Name:
* Assignment: Lab 1 Exercise B
* Lab section: B01
* Completed by: Carl Soriano
* Submission Date: Sept 18, 2021
*/

#include <stdio.h>
int main(){
    // insert code here...
    double num1 = -34.5;
    double num2 = 98.7;
    double sum; // sum of num1 and num2
    double sumSquared; // the square of num2 plus num2
    
    sum = num1 + num2;
    
    sumSquared = sum*sum;
    
    // 1) Add the two numbers and store the result in the variable 'sum'
    // 2) Compute the square of the sum and store the result in the variable 'sumSquared'
    // Use the variable 'sum' (computed above) for this computation
    printf( "The sum squared is: %f \n", sumSquared);
    
    sumSquared = sumSquared*2;
    // 3) Now double the sum squared value and store the result in 'sumSquared'
    printf( "The sum squared is now: %f \n", sumSquared);
     
    return 0;
}
