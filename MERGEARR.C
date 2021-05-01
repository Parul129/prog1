void main()
{
	int a1[10], a2[10], a3[20];
	int n1, n2, i, j, k;
	clrscr();
	printf("Enter size of array 1 and 2 : ");
	scanf("%d%d",&n1, &n2);

	//input values in array
	printf("\nInput values in array 1 : ");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("\nInput values in array 2 : ");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&a2[i]);
	}

	//display array values
	printf("\nValues in array 1 : ");
	for(i=0;i<n1;i++)
	{
		printf("%d\t",a1[i]);
	}
	printf("\nValues in array 2 : ");
	for(i=0;i<n2;i++)
	{
		printf("%d\t",a2[i]);
	}

	//copy content of a1[] into a3[]
	for(i=0,j=0;i<n1;i++,j++)
	{
		a3[j] = a1[i];
	}

	// copy content of a2[] into a3[]
	for(k=0;k<n2;k++,j++)
	{
		a3[j] = a2[k];
	}

	//merged array a3[]
	printf("\nMerged Array : ");
	for(j=0;j<n1+n2;j++)
	{
	printf("%d\t",a3[j]);
	}
getch();
}