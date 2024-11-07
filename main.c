/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int n;
 printf("enter the number: ",n);
 scanf("%d",&n);
 
 if(n>1 && n%2!=0 || n==2){
     printf("this number is prime");
     
 }
 else
 {
     printf("this number is not prime");
 }

    return 0;
}
