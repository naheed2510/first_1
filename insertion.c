#include<stdio.h>
int main()
{
  int i,n,temp,j,a[i];
  printf("Enter the number of elements in the array:");
  scanf("%d",&n);
  printf("The elements are:");
  for(i=0;i<n;i++)
  {scanf("%d",&a[i]);}
  for(i=1;i<n;i++)
  {temp=a[i];
  j=i-1;
  while(j>=0&&a[j]>temp)
  { 
  a[j+1]=a[j];
  j--;
  a[j+1]=temp;
  }
  }
  
  printf("Sorted array is:");
  for(i=0;i<n;i++)
  {scanf("%d",&a[i]);}
 
 }
