#include<stdio.h>
void main()
{
int i,j,k,sum=0;

i=10;
j=15;
k=20;

sum=i++ + j;

printf("Sum: %d",sum); //25
printf("i=%d",i);     //i=11

sum=++i + j;

printf("Sum: %d",sum); //26
printf("i=%d",i);  //i=11

sum=i++ + j+ ++k; //runs left to right 46

printf("sum: %d",sum);
printf("i=%d j=%d k=%d",i,j,k);

sum=i++ + j + ++k + i; //

printf("sum: %d",sum);
prinf("i=%d j=%d k=%d",i,j,k);

getch();
}