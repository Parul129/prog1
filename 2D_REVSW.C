/*Swappind each element with its next element*/
void main()
{
int n,i,j,a[10],temp;
clrscr();

printf("Enter the size of an array: ");
scanf("%d",&n);

	//input array
		printf("Enter values in array: ");
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);



	//display array
		printf("\nArray values are: \n");
		for(i=0;i<n;i++)
			printf("%d\t",a[i]);

	//Swap each element with its next element
		for(i=0;i<n;i=i+2)
		{
			//swapping a[i] with a[i+1]
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}

	//display swap array
		printf("\nReverse swapping array values are:\n");
		for(i=0;i<n;i++)
			printf("%d\t",a[i]);

getch();
}