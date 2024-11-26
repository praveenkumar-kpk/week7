#include<stdio.h>

int sum(int a[],int n)
{
	int s=0,i;
	for(i=0;i<n;i++)
	s=s+a[i];
	
	return s;
}

int main()
{
  int n,i;
  printf("enter the number of elements:");
   scanf("%d",&n);
   int a[n],total;
   printf("enter the elements:");
   	for(i=0;i<n;i++)
   	scanf("%d",&a[i]);
   	
   	total=sum(a,n);
   	float avg;
   	avg=total/n;
   	printf("the average is %f",avg);
	
	return 0;
}
