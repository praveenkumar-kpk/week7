#include<stdio.h>
int main()
{
	int n,i,j,k=1,l;
	printf("enter the no of elements in a row:");
	scanf("%d",&n);
	int a[n][n];

		for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		a[i][j]=0;
	}
	
	i=n/2;
	j=n-1;
	
	a[i][j]=k;
	
	for(k=2;k<=n*n;k++)
	{  
		i=i-1;
		j=j+1;
		
		l:
		if(i==-1&&j==n)
		{
		i=0;
		j=n-2;
		}	
			
		if(i==-1){
		i=n-1;
	   }
		if(j==n){
		 j=0;
	   }
	   	
		if(a[i][j]!=0)
		{
		i=i+1;
		j=j-2;
		goto l;
		}
	
	    a[i][j]=k;
    }
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
  return 0;	
}
