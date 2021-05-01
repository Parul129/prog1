/*Deletion in linear search*/
void main()
{
int i,n,a[10],val,f,pos;
clrscr();

printf("Enter the size of array: ");
scanf("%d",&n);

	for(i=0;i<n;i++)
	{
	printf("Enter value: ",i);
	scanf("%d",&a[i]);
	}

	printf("\nList of array is: ");
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}

	printf("\nInput the value you want to be deleted: ");
	scanf("%d",&val);

	pos=-1;

	for(i=0;i<n;i++)
	{
		if(a[i]==val)
		{
		printf("\nNumber found at %d postion",i+1);
		f=1;
		pos=i;
		}

		if(f==0)
		{
		printf("Number not found");
		}

		//delete element at pos position
		for(i=pos+1;i<n;i++)
		{
		a[i-1]=a[i];
		}
		n--;	//decrease the size of array by 1
	}
getch();
}