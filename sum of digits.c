/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int sum(int n);
int main()
{int n1;
printf("enter the number: ");
scanf("%d",&n1);

printf("the sum of the digits is: %d",sum(n1));
return 0; 
}
int sum(int n){
  int sum_digits=0;
  while(n>0){
      sum_digits +=n%10;
      n /=10;}
      return sum_digits;
  }