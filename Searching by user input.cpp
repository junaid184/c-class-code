#include<iostream>
using namespace std;

int main() {
	int search,a,b,i, index, size;
	
	cout<<"\n enter size of the array";
	cin>>size;
	
	int arr[size];
	
	for(i=0; i<=size; i++)
	{
		cout<<"enter arr["<<i<<"]";
		cin>>arr[i];
	}
	
	for(i=0;i<=size;i++)
	cout<<" "<<arr[i];
	
	cout<<"\n enter any number to search \n";
	cin>>search;
	for(i=0;i<=7;i++)
	{
		if(arr[i]==search)
		{
			index=i;
			break;
		}
		
 	} 
 cout<<"\n found at index"<<index;
}
