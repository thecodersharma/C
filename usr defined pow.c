/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
double power(double base, double expo){
    double result =1;
    if(expo<0){
        base = 1/base;
        expo= -expo;}
        for(int i=1; i<=expo; i++){
            result *=base;
        }
    
    return result;
}
int main()
{
    double base;
    double expo;
    printf("enter the base: ");
    scanf("%lf",&base);
    printf("enter the exponent: ");
    scanf("%lf",&expo);
    printf("%.2lf to the power of %.2lf is: %.2lf",base,expo,power(base,expo));

    return 0;
}
