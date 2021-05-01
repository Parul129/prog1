void main()
{
	int n, i;
	int a[10],low,mid,high,val;

	clrscr();
	printf("Enter size of array: ");
	scanf("%d",&n);

	//input values in array
	printf("\nInput values in array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	//display array values
	printf("\nValues in array: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

	//which nummber you want to be searched
	printf("\nEnter the number you want to be searched ");
	scanf("%d",&val);

	low=0;
	high=n-1;

	//apply binary search
	while(low<=high)
	{
		mid=(low+high)/2;
		printf("Mid: %d\n",mid);
		if(a[mid]==val)
		{
		printf("Number found at %d position",mid+1);
		break;
		}
		else if(a[mid]<val)
			{
			low=mid+1;
			printf("Low: %d\n",low);
			}
		else if(a[mid]>val)
			{
			high=mid-1;
			printf("High: %d\n",high);
			}
	}
	if(low>high)
	{
	printf("Number not in list");
	}
getch();
}