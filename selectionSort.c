#include<stdio.h>

int main() {


	
	int n;
	printf ("Enter the num of elements for array:");
	scanf("%d" , &n );
	
	printf ("Enter the elements for array ");
	int arr[n];
	for ( int i = 0 ; i < n ; i++ ) {
		scanf("%d" , &arr[i]);
	}
	
	int min = 1000000;
	int minIndex = 0;

	
	for ( int i = 0 ; i < n-1 ; i++ ) {
		for ( int j = i+1 ; j < n ; j++ ) {
			if ( arr[j] < arr[i]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
		

	}
	
	for ( int i = 0 ; i < n ; i++ ) {
		printf("%d" , arr[i]);
	}
	
	return 0;
}


