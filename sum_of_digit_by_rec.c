#include<stdio.h>

int sum(int);
void main()
{
	int n;
	
	printf("hello\nenter values=");
	scanf("%d",&n);

	printf("%d",sum(n));

	getch();
}

int sum(int x)
{
	if(x!=0)
	{
		return (x%10+sum(x/10));
	}
	else
	{
		return 0;
	}
}
