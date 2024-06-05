#include <stdio.h>

void printArray(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ", arr[i]);
	} printf("\n");
}

int partition(int arr[],int low,int high)
{
	
	int pivot = arr[low];
	int i = low;
	int j = high;
	int temp = 0;
	
	while(i<j)
	{
		while(arr[i] <= pivot)
		{
			i++;
		}
		
		while(arr[j] > pivot)
		{
			j--;
		}
		
		if(i < j) {
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
		
	} 
	
	temp = arr[low];
	arr[low] = arr[j];
	arr[j] = temp;
	
	return j;
	
}

void quickSort(int arr[],int low,int high)
{
	
	if(low < high){
	int part = partition(arr,low,high);
	quickSort(arr,low,part-1);
	quickSort(arr,part+1,high);}
}

int main()
{
	int s,i;
	printf("Enter the size of the array:\n");
	scanf("%d",&s);
	int arr[s];
	printf("\nEnter the array elements:\n");
	for(i=0;i<s;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nArray before sorting:\n");
	printArray(arr,s);
	quickSort(arr,0,s-1);
	printf("\nArray after sorting:\n");
	printArray(arr,s);
	
	return 0;
}
