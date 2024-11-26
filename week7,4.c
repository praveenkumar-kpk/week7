#include<stdio.h>

int main()
{
  int n1,n2,n;
  printf("enter the number of elementsin 1st array:");
   scanf("%d",&n1);
     
   int i;
   int *arr1=(int*)malloc(n1*sizeof(int));
 
   printf("enter the elements:");
   	for(i=0;i<n1;i++)    
   	scanf("%d",&arr1[i]);
	   
	 printf("enter the number of elementsin 2nd:");
   scanf("%d",&n2);
     
   int *arr2=(int*)malloc(n2*sizeof(int));
 
   printf("enter the elements:");
   	for(i=0;i<n2;i++)    
   	scanf("%d",&arr2[i]);
   	
   	n=n1+n2;
   	
   	 int *arr=(int*)malloc(n*sizeof(int));
 
   	for(i=0;i<n1;i++)    
   	arr[i]=arr1[i];
	   
    for(i=0;i<n2;i++)    
   	arr[n1+i]=arr2[i];   
   	
   	printf("the append array is:");
   	
   	for(i=0;i<n;i++)
   	printf("%d",arr[i]);
   	
   	free(arr1);
   	free(arr2);
   	free(arr);

   	return 0;
}
