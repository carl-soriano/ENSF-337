//
//  main.c
//  Exercise_E
//
//  Created by Carl  Soriano on 2022-09-20.
//
/*
* File Name:
* Assignment: Lab 1 Exercise E
* Lab section: B01
* Completed by: Carl Soriano
* Submission Date: Sept 21, 2021
*/

#include <stdio.h>
#include <math.h>
int main() {
    
    double a,b,c,square,r1,r2,complex_real,complex_imaginary;
    //prompt user for entered values
    printf("Enter Coefficients in order a, b and c:");
    
    scanf("%lf %lf %lf", &a, &b, &c);
    //under the square root varialble
    square = b * b - 4 * a * c;
    //accounts for if the value/discriminat is negative
    if (square > 0) {
        r1 = (-b + sqrt(square)) / (2 * a);
        
        r2 = (-b - sqrt(square)) / (2 * a);
        
        printf("r1 = %lf and r2 = %lf", r1, r2);
    }
    //accounts for if the roots are equal
    else if (square == 0){
        r1 = r2 = -b / (2 * a);
        
        printf("r1 = r2 = %lf", r1);
        
    }
    //accounts for imaginary and real roots
    else {
        
        complex_real = -b / (2 * a);
        
        complex_imaginary = sqrt(-square) / (2 * a);
        
        printf("r1 = %lf + %lfi and r2 = %f - %fi \n", complex_real, complex_imaginary, complex_real, complex_imaginary);
        
    }
    
    return 0;
}

