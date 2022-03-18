#include<stdio.h>

int main()
{
	int i,j;
	int n=5;//The total number of elements in the array.
	int k;//N\B: THIS IS JUST THE POSITION VARIABLE NOT THE INDEX.
		//THE INDEX CAN BE CALCULATED AS(K-1);
	int item;
	
	int array[n];
	
		//PROMPTS the user to enter the array elements.
		printf("Enter the array elements:\n");
		 for(i=0;i<n;i++){
				scanf("%d",&array[i]);//Stores the entered elements each to its assigned index.
		}
				
			//DISPLAYS the entered elements.
	 		for(i=0;i<n;i++){
	 			printf("Array[%d]=%d\n",i,array[i]);
			 }	
			 
				//PROMPTS the user to enter the item to be updated into the array.
				 printf("Enter the new  item you want to include: ");
				 scanf("%d",&item);//Stores the value of the item entered into the item variable.
	 
	 				//PROMPTS the user ro enter the position of the item  to be updated.(k)
	 				printf("Enter the position of the item you want to update: ");
	 				scanf("%d",&k);//Stores the item position in the variable K;
	 
	 
	 array[k-1]=item;//ASSIGNS the item to the position indicated on the array.
	
	 	printf("The items after updating were:\n");
	 	
	 		//PRINTS THE ARRAY ELEMENTS AFTER THE UPDATE:
	 		for(i=0;i<n;i++){
	 		printf("Array[%d]=%d\n",i,array[i]);
			 }
	 
	 return 0;
}
