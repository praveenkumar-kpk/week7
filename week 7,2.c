#include<stdio.h>

int main()
{
  int n;
  printf("enter the number of elements:");
   scanf("%d",&n);
     
   int i;
   int *arr=(int*)malloc(n*sizeof(int));
 
   printf("enter the elements:");
   	for(i=0;i<n;i++)    
   	scanf("%d",&arr[i]);
   	
   	int largest;
   	arr[0]=largest;
   	for(i=0;i<n;i++)
   	{
   		if(arr[i]>largest)
   		largest=arr[i];
	}
	
	printf("largest element is %d",largest);
	
	free(arr);
	
	return 0;
}
