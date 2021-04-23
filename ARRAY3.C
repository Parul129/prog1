#include<stdio.h>
void main()
{
int num[10],i,min;

printf("Enter 10 nos. ");

	for(i=0;i<10;i++)
	{
		sacnf("%d",num[i]);
	}

min=num[0];    //max=num[0];
	for(i=0,i<10;i++)
	{
		if(nums[i]<min)         //if(num[i]>max)
		{                       //{
			min=num[i];     // max=nums[i];
		}                       //}

	}
printf("Min number is %d",min);

getch();


}