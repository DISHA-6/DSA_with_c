#include<stdio.h>
int search(int arr[],int n,int t)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]==t)
		return i;
	}
	return (-1);
}
int main()
{
	int size,n,i;
	printf("enter array size:\n");
	scanf("%d",&size);
	
	int arr[sizeof(int)*size];
	printf("\nEnter array elements : \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched:");
	int t;
	scanf("%d",&t);
	if(search(arr,size,t)==-1)
	{
		printf("element not found");
	}
	else
	{
		printf("element found at:%d",search(arr,size,t));
	}
	return 0;
}
