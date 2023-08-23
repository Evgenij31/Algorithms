#include<iostream>
using namespace std;
int main()
{
	int n, target, pos=-1;
	cout<<"Enter the length of the array and the number you are searching for: \n";
	cin>>n>>target;
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
		
	int front=0, back=arr[n-1];
	while(front<=back) {
		if(arr[front]==target) {
			pos=front;
			break;
		}
		if(arr[back]==target) {
			pos=back;
			break;
		}
		front++;
		back--;
	}
	
	if(pos!=-1)
		cout<<"The number "<<target<<" is the "<<pos+1<<" number in this array. \n";
		
	else
		cout<<"The number "<<target<<" is not present in this array. \n";
		
	for(int i=0; i<n; i++)
		cout<<arr[i]<<" ";
	
}

