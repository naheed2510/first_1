#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,min,temp,n,a[i];
	printf("Enter the number of elements in array:");
	scanf("%d",&n);
	printf("Enter the elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			a[i]<min;
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}  
	printf("Sorted array is:");
  	for(i=0;i<n;i++)
  	{
  		printf("%d",a[i]);
 
 	}
}
