#include<stdio.h>
void main()
{
int nums[10],i,sum=0;
double avg=0;

printf("Enter 10 nos. : ");

	for(i=0;i<10;i++)
	{
	scanf("%d",&nums[i]);
	}

	for(i=0;i<10;i++)
	{
	sum=sum+nums[i];
	avg=nums[i]/10.0;
	}
printf("Sum %d",sum);
printf("Avg: %2lf",avg);
getch();
}