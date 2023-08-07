#include <stdio.h>

// Function to find the highest sum from two elements in an array
int findHighestSum(int arr[], int size) 
{
     int maxSum = 0;

         // Traverse the array to find the two highest number

     for (int i = 0; i < size; i++) 
     {
	     for (int j = i + 1; j < size; j++) 
	     {
		     int sum = arr[i] + arr[j];
		     if (sum > maxSum) 
		   {
			   maxSum = sum; 
		   }
	     }
    }
     return maxSum;
}
int main() 
{
	int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
       
	int arr[size];
	printf("Enter %d elements: ", size);
	for (int i = 0; i < size; i++) 
	{
		scanf("%d", &arr[i]);
	}
	int highestSum = findHighestSum(arr, size);
	printf("The highest sum that can be achieved from two elements in the array is: %d\n", highestSum);
	return 0;
}

