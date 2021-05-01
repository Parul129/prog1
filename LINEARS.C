/*Linear search*/
void main()
{
int a[10],i,n,f,val;
clrscr();

printf("\n Enter size of array: ");
scanf("%d",&n);

	printf("\nLinear list is\n");
	for(i=0;i<n;i++)
	{
	printf("Enter value:");
	scanf("%d",&a[i]);
	}

 printf("\nDisplayed array is:");
 for(i=0;i<n;i++)
 {
 printf("%d\t",a[i]);
 }

 printf("\nInput value to be searched: ");
 scanf("%d",&val);

	for(i=0;i<n;i++)
	{
		if(a[i]==val)
		{
		printf("\nNumber found at %d position",i+1);
		f=1;
		}
	}
		if(f==0)
		{
		printf("Number not found",f);
		}
getch();
}