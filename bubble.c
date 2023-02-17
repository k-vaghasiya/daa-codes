#include<stdio.h>

void printArray(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d  ", array[i]);
	}
	printf("\n");
}

int main(){

	int size;
	printf ("Enter the num of elements for array : ");
	scanf("%d" , &size );
	
	printf ("Enter the elements for array : ");
	int arr[size];
	for ( int i = 0 ; i < size ; i++ ) {
		scanf("%d" , &arr[i]);
	}

	int max = -1;
	int maxIndex = -1;

	for (int step = 0; step < size - 1; ++step)
	{
		for (int i = 0; i < size - step - 1; ++i)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	printArray(arr , size);

	return 0;
}

