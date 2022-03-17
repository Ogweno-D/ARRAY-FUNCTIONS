#include<stdio.h>


int main()
{
	int i,j;
	int n=5;// total number of elements in the array.
	int item=20;// item to be inserted.
	int k=3;// The position of the item to be deleted.
	
	//The array has 5 elements.
	int array[]={23,14,15,26,23};
	j=n;
	
		for(i=0;i<n;i++)
			{
		printf("The array[%d] elements are %d:\n",i,array[i]);
		
			}
			n=n+1;
		
		while(j>=n){
			array[j+1]=array[j];
			j=j-1;
		}
		array[j]=item;
		
		printf("After insertion the elements of the array are:\n");
		
		for(i=0;i<n;i++){
			printf("Array[%d]=%d\n",i, array[i]);
			
		}
	
	printf("=====================")
	
	printf("Deletion") 
		
	printf("When you delete:\n");
	
	j=k;
	k=3;
	
		while(j<n){
			array[j-1]= array[j];
			j=j+1;
		}
		n=n-1;
	
		//Prints the array after deletion.
		for(i=0;i<n;i++){
			printf("Array[%d]=%d\n",i, array[i]);
			
		}
		
		
	printf("Now when you want to update a new value to that position:\n");
	
	item=10;
	k=5;
	
	array[k-1]=item;
	
	//Program that prints out the items after an update of the elements.
	for(i=0;i<n;i++){
			printf("Array[%d]=%d\n",i, array[i]);
			
		}
		
		return 0;
}
