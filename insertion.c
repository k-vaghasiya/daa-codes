#include<stdio.h>

int main ( ) {
    
    int n;
	printf ("Enter the num of elements for array : ");
	scanf("%d" , &n );
	
	printf ("Enter the elements for array :  ");
	int arr[n];
	for ( int i = 0 ; i < n ; i++ ) {
		scanf("%d" , &arr[i]);
	}
	
	int arr2[n];
	arr2[0] = arr[0];
	
	for ( int i = 1 ; i < n ; i++ ) {
	    int j = i-1;
	    int key = arr[i];
	    
	    while ( j >= 0 && arr2[j] > key){
	        arr2[j+1] = arr2[j];
	        j -= 1;
	    }
	    
	    arr2[j+1] = key;
	    
	}
    
    for ( int i = 0 ; i < n ; i++ ) {
	    printf(" %d " , arr2[i]);
	}
    
    return 0;
}
