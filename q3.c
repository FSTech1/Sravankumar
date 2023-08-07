#include <stdio.h>

int findEquilibrium(int arr[], int n)
{
	int total_sum = 0;
	int left_sum = 0;
	
	for (int i = 0; i < n; i++) 
	{
		total_sum += arr[i];
	}
	for (int i = 0; i < n; i++) 
	{
		int right_sum = total_sum - left_sum - arr[i];
		if (left_sum == right_sum) 
		{
			return i; 
		} 
		left_sum += arr[i];
	}
	return -1;
}
int main() 
{
	int arr1[] = {1, 9, 99, 5, 6};
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int result1 = findEquilibrium(arr1, n1);
	printf("Equilibrium point of the first array: %d\n", result1);
	
	int arr2[] = {1, 5, 7, 8, 9};
	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	int result2 = findEquilibrium(arr2, n2);
	printf("Equilibrium point of the second array: %d\n", result2);

	return 0;
}
