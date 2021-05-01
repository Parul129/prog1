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

	//Reverse array
		for(i=0,j=n-1;i<=j;i++,j--)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}

	//display reverse
		printf("\nReverse array values are:\n");
		for(i=0;i<n;i++)
			printf("%d\t",a[i]);

getch();
}