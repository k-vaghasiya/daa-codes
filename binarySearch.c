#include<stdio.h>

/*
void fun ( int s , int e , int* arr , int key ) {
	int mid = ( s+e ) /2;
	
	if ( arr[mid] == key ) {
		printf("key is found at index   %d     " , mid );
		return;
	}
	
	else if ( key > arr[mid] ) {
			fun ( mid+1 , e , arr , key );
	} 
		
	else {
			fun ( s , mid-1 , arr , key );
	}
}
*/
	

int main(){

	
	int key;
	int n;
	printf("enter the size of array ");
	scanf("%d" , &n );
	int arr[n];
	printf ( "enter the all elements of the array ");
	
	for ( int i = 0 ; i < n ; i++ ) {
		scanf( "%d" , &arr[i] );
	}
		
	printf("enter the key ");
	scanf("%d" , &key);


	int s = 0;
	int e = n-1;
	
	int mid = (s+e)/2;
	
	while ( s <= e ) {
	
		if ( key == arr[mid] ) {
			printf("key is found at index   %d     " , mid );
			break;
		}
		
		else if ( key > arr[mid] ) {
			s = mid+1;
		} 
		
		else {
			e = mid-1;
		}
		
		mid = ( s+e ) /2;
	}
	

	return 0;
}
