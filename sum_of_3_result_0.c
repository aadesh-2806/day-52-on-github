#include<stdio.h>
#include<math.h>

void main()
{	
	int i,b[50],a[50][50],x,t,s,n,k,j;
	printf("hello\nenter value=");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{	
		printf("enter value%d=",i+1);
		scanf("%d",&b[i]);
	}
	x=0;
	for(s=0;s<n;s++)
	{
		for(j=s+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if(b[s]+b[j]+b[k]==0)
				{
					a[x][0]=b[s];a[x][1]=b[j];a[x][2]=b[k];
					x++;
				}				
			}
		}
	}
	for(s=0;s<x;s++)
	{
		for(j=0;j<3;j++)
		{
			for(k=j+1;k<3;k++)
			{
				if(a[s][j]>a[s][k])
				{
					t=a[s][j];
					a[s][j]=a[s][k];
					a[s][k]=t;
				}
			}
		}
	}
	for(s=0;s<x;s++)
	{
		for(j=s+1;j<x;j++)
		{
			if(a[s][0]==a[j][0] && a[s][1]==a[j][1] && a[s][2]==a[j][2])
			{
				break;
			}
		}
		if(j==x)
		{
			printf("[%d,%d,%d]",a[s][0],a[s][1],a[s][2]);
		}
	}
	getch();
}
