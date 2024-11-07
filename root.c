/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{double n, res;
printf("enter the number: ");
scanf("%lf",&n);
if(n>0){
    res=sqrt(n);
    printf("the root of the number .%.2f is: %.2f\n",n,res);
}
else{
    printf("roots are not defined for numbers less than/equal to 0 in the real number sysetm");
}
    return 0;
}