/*
 *  lab2exe_A.c
 *  Created by Mahmood Moussavi
 *  Completed by: Student Name
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double G = 9.8;   /* gravitation acceleration 9.8 m/s^2 */
const double PI = 3.141592654;

void create_table(double v);
double Projectile_travel_time(double a, double v);
double Projectile_travel_distance(double a, double v);
double degree_to_radian(double d);

int main(void)
{
    int n;
    double velocity;
    
    printf ("Please enter the velocity at which the projectile is launched (m/sec): ");
    n = scanf("%lf" ,&velocity);
    
    if(n != 1)
    {
        printf("Invlid input. Bye...");
        exit(1);
    }
    
    while (velocity < 0 )
    {
        printf ("please enter a positive number for velocity: ");
        n = scanf("%lf", &velocity);
        if(n != 1)
        {
            printf("Invlid input. Bye...");
            exit(1);
        }
    }

    create_table(velocity);
    
    
    return 0;
}

void create_table(double v)
{
    double a,i;
    
    printf("Angle   \t t    \t      d    \n"); //table
    printf("(deg)   \t (sec)   \t (m)   \n"); //table
    
    
    for (a = 0; a <= 90; a+=5) // for loop to make table
    {
        
        i = degree_to_radian(a);
        
        printf("%lf \t %lf \t %lf \n", a ,Projectile_travel_time(i,v),Projectile_travel_distance(i,v));
    }
    
}
    
    double Projectile_travel_time(double a, double v)
    {
        double t;
        
        t = (2*v*sin(a))/G;
        
        return t;
    }

    double Projectile_travel_distance(double a, double v)
    {
        double distance;
        
        distance = fabs((pow(v,2)/G) * sin(2 * a ));
        
        return distance;
    }
    

    double degree_to_radian(double d)
    {
        d = d * (PI/180);
        
        return d;
    }
    
    
        

/* UNCOMMENT THE CALL TO THE create_table IN THE main FUNCTION, AND COMPLETE THE PROGRAM */

