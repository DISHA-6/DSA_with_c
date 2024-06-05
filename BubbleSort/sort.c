#include<stdio.h>    
void bubbleSort(int a[], int n)   
 {  
   int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
 } 
 void print(int a[], int n){
 
    int i;  
    for(i = 0; i < n; i++)    
    {    
        printf("%d ",a[i]);    
    }        
}   
int main(){
	int s,i;
	printf("Enter the array size:\n");
	scanf("%d",&s);
	int arr[s];
	printf("\nEnter the array elements:\n");
	for(i=0;i<s;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nArray before sorting:\n");
	print(arr,s);
	bubbleSort(arr,s);
	printf("\nArray after sorting:\n");
	print(arr,s);
}
