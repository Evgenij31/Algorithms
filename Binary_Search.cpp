#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
	int i, j;
	for(i=1; i<n; i++) {
		int key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key) {
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}

int binarySearch(int arr[], int lo, int hi, int target) {
	
	while(lo<=hi) {
		int mid=lo+(hi-lo)/2;
		
		if(arr[mid]==target)
			return mid;
		
		if(arr[mid]<target)
			lo=mid+1;
			
		else
			hi=mid-1;
	}
	
	return -1;
}

int main()
{
	cout<<"Enter the length of the array and the target: \n";
	int n, target;
	cin>>n>>target;
	cout<<"Enter elements of the array: \n";
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	
	insertionSort(arr, n);
	
	int lo=0, hi=n-1;
	int result=binarySearch(arr, lo, hi, target);
	cout<<"The (target) number "<<target<<" is the "<<result+1<<" number of the array.";
}

