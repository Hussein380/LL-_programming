#include <stdio.h>
/**function to swap two integers**/
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/*function to perform selection sort*/
void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	/*one by one move boundary of unsorted array*/
	for (i = 0; i < n -1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[min_idx])
				min_idx = j;

		}
		if (min_idx != i)
			swap(&arr[min_idx], &arr[i]);
	}
}
/*funnction to print an array*/
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

/*Driver programme to test above functions*/
// Driver program to test above functions
int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}
