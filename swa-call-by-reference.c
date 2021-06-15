#include<stdio.h>

void swap(int*,int*);
void main()
{
	int a,b; // p is a pointer (pointer to variable)
	//int *p,*q;
	printf("Enter 2 values:");
	scanf("%d%d",&a,&b);
	//swap
	swap(&a,&b);
	printf("After swapping: %d\t%d\n",a,b);
	getch();
}

void swap(int *p,int *q)
{
	int t;
		t=*p;
		*p=*q;
		*q=t;
	//printf("After swapping: %d\t%d\n",*p,*q);	
	getch();		
}	 
