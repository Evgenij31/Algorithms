#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the length of the array: \n";
	cin>>n;
	int arr[n], i, j;
	for(i=0; i<n; i++)
		cin>>arr[i];
		
		
	int key=0;
	for(i=1; i<n; i++) {
		key=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>key) {
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	
	for(i=0; i<n; i++)
		cout<<arr[i]<<" ";
}

