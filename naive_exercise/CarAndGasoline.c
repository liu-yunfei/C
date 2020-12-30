/* From C Primer Plus 6th Edition
Write a program that asks the user to enter the number of miles traveled and the number
of gallons of gasoline consumed. It should then calculate and display the miles-per-gallon
value, showing one place to the right of the decimal. Next, using the fact that one gallon
is about 3.785 liters and one mile is about 1.609 kilometers, it should convert the mileper-
gallon value to a liters-per-100-km value, the usual European way of expressing fuel
consumption, and display the result, showing one place to the right of the decimal. Note
that the U. S. scheme measures the distance traveled per amount of fuel (higher is better),
whereas the European scheme measures the amount of fuel per distance (lower is better).
Use symbolic constants (using const or #define ) for the two conversion factors.*/
#include<stdio.h>
#define GALLONTOLITER 3.785
#define MILETOKILOMETER 1.609

int main(void)
{
    double miles,gallons;

    printf("Enter the number of miles traveled: ");
    scanf("%lf",&miles);
    printf("Enter the number of gallons of gasoline consumed: ");
    scanf("%lf",&gallons);
    printf("\nThe value of mile-per-gallon is %.1lf\n",miles/gallons);
    printf("The value of liters-per-100-km is %.1lf\n",(gallons*100*GALLONTOLITER)/(miles*MILETOKILOMETER));

    return 0;
}