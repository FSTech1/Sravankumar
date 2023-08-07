#include <stdio.h>

int findFixedPoint(int arr[], int start, int end) 
{
       	while (start <= end) 
	{
		int mid = start + (end - start) / 2;
		if (arr[mid] == mid) 
		{
			return mid;
		}
	       	else if (arr[mid] < mid) 
		{
			start = mid + 1;
		}
	       	else
	       	{
			end = mid - 1;
		}
	}
	return -1;
}
int main() 
{
	int arr1[] = {-6, 0, 2, 40};
       	int n1 = sizeof(arr1) / sizeof(arr1[0]);
       	int result1 = findFixedPoint(arr1, 0, n1 - 1);
			      
	printf("Fixed point: %d\n", result1);

	int arr2[] = {1, 5, 7, 8};
       	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	int result2 = findFixedPoint(arr2, 0, n2 - 1);
	printf("Fixed point: %d\n", result2);
       
	return 0;
}
