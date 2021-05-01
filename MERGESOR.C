void main()
{
	int a1[10], a2[10], a3[20];
	int n1, n2, n3, i, j, k;
	clrscr();

	printf("Enter size of array1 and2 : ");
	scanf("%d%d",&n1,&n2);

	//input values in array
	printf("\nInput values in array1 : ");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("\nInput values in array2 : ");
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

	//merging by comparing 2arrays
	for(i=0,j=0,k=0;i<n1&&j<n2;k++)
	{
		if(a1[i]<a2[j])
		{
		a3[j] = a1[i++];
		}
		else
		{
		a3[k]=a2[j++];
		}
	}

	// copy the remaining elements from a1[] to a3[]
	if(i<n1)
	{
		while(i<n1)
		{
		a3[k++] = a1[i++];
		}
	}

	// copy the remaining elements from a2[] to a3[]
	if(j<n2)
	{
		while(j<n2)
		{
		a3[k++] = a2[j++];
		}
	}
	n3=n1+n2;

	//merged array a3[]
	printf("\nMerged Array : ");
	for(i=0;i<n3;i++)
	{
	printf("%d\t",a3[i]);
	}
getch();
}