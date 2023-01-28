//
//  main.c
//  Exercise_D
//
//  Created by Carl  Soriano on 2022-09-17.
//
/*
* File Name:
* Assignment: Lab 1 Exercise D
* Lab section: B01
* Completed by: Carl Soriano
* Submission Date: Sept 21, 2021
*/


#include <stdio.h>
#include <math.h>

double taylor_series(double x);
double factorial(double x);

int main(){
    double x;
    //prompt user for value
    printf("Enter radian value here: ");
    scanf("%lf", &x);
    //calculate sin(x)
    printf("Value input: %lf \n",(x));
    printf("Calculated sine value: %lf \n", sin(x));
    //calculate taylor series
    double a = taylor_series(x);
    printf("Taylor Series Approximation: %lf \n", a);
    
        
    return 0;
}
//taylor series function
double taylor_series(double x)
{
    double c;
    {
        c = x - (pow(x,3)/6) + (pow(x,5)/120) - (pow(x,7)/5040);
    }
    return c;
}
