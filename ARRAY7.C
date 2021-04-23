//WAP to find out the length of an array.
#include<stdio.h>
void main()
{
char ch[50],i;
printf("Enter any string: ");
scanf("%s",&ch);
	for(i=0;ch[i]!='\0';i++);
printf("Length is %d",i);

getch();

}