#include<stdio.h>
void main()
{
int i,arr[5],max;
clrscr();

arr[0]=2;
arr[1]=3;
arr[2]=5;
arr[3]=4;
arr[4]=5;
arr[6]=12;

max=arr[0];
	for(i=0;i<7;i++)
	{
		if(arr[i]>max)
		{
		max=arr[i];
		}
	}
	printf("Max no. is %d",max);


getch();
}
