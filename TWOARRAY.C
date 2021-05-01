//print of 2array
void main()
{

int i,n1,n2,a1[10],a2[10];
clrscr();

printf("Input size of an array: ");
scanf("%d%d",&n1,&n2);

	//Input 2 arrays
	printf("\nInput values in first array: ");
	for(i=0;i<n1;i++)
	{
	scanf("%d",&a1[i]);
	}

	printf("\nInput values in second array: ");
	for(i=0;i<n2;i++)
	{
	scanf("%d",&a2[i]);
	}


	//Display 2 arrays
	printf("\nValues in 1st array: ");
	for(i=0;i<n1;i++)
	{
	printf("%d\t",a1[i]);
	}

	printf("\nValues in 2nd array: ");
	for(i=0;i<n2;i++)
	{
	printf("%d\t",a2[i]);
	}
getch();
}