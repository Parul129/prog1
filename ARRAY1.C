#include<stdio.h>
void main()
{
int arr[5],i;
clrscr();

printf("Enter 7 nos: ");

	for(i=0;i<7;i++)
	{
	scanf("%d",&arr[i]);
	}
printf("Numbers you entered are: ");

	for(i=0;i<7;i++)
	{
	printf("%d",arr[i]);
	}
getch();
}