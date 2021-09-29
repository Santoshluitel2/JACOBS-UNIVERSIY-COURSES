/*
CH-230-A
a1_p3.c
santosh luitel
sluitel@jacobs-university.de
*/
#include <stdio.h> // syntax error before include missing #
int main() {
float result; /*The result of the division */
int a = 5;
float b = 13.5; // b is not integer
result = a / b;
printf("The result is %lf\n", result); // %d won't work as the result is float %lf should be used
return 0;
}

