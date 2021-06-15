#include<stdio.h>

void main()
{
	
	int i,a[100],s[100],c[50][50],t,n,m,j,k,l;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
		i++;
	}
	
	i=0;
	j=0;
	k=0;
	s[0]=0;
	while(i<n)
	{
		
		s[k+1]=a[i]+s[k];
		if(s[k]==0)	
		{				
			c[j][t]=s[k];
			t++;
		}
		k++;
		i++;
	
	}
	
	getch();
	
}	 		
