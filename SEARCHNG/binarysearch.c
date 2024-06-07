#include<stdio.h>
void sort(int arr[],int n )
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j]){
			
			temp=arr[i];
		    arr[i]=arr[j];
		    arr[j]=temp;}
		}
		
	}
}
int binarySearch(int arr[], int low, int high, int x)
{
	if (low<=high) {
		int mid = low + (high-low)/ 2;
		if (arr[mid] == x)
			return mid;
		else if (arr[mid]>x)
			return binarySearch(arr, low, mid - 1, x);
		else 
		return binarySearch(arr, mid + 1, high, x);
	}
	return -1;
}
void printarray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf(" %d ",arr[i]);
	}printf("\n");
	
}
int main(void)
{
	int arr[100],i,s=0,x; 
	printf("Enter the range:\n");
	scanf("%d",&s);
	printf("Enter the array elements:\n");
	for(i=0;i<s;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,s);
	printf("the sorted array is:\n");
	printarray(arr,s);
	printf("Enter the element u want to find:\n");
	scanf("%d",&x);
	int result = binarySearch(arr, 0, s - 1, x);
	(result == -1)? printf("Element is not present in array"): printf("Element is present at index %d", result);
	return 0;
}

