/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{double n;

printf("enter the temperature: ");
scanf("%lf",&n);

if(n>35){
    printf("the weather is hot");
    
}
    if(n>20 && n<=35){
        printf("the weather is pleasant");
    }


if(n<20){
    printf("the weather us cold");
}

    return 0;
}
