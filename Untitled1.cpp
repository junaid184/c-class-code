#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int arr[10] = {45, 38, 96, 35, 4, 99, 100};
	int i,n=7;
	int val;
	int pos;
	for(i=0; i<n-1; i++)
	cout<<"\n\nResultant array is "<<arr[i];
//	cout<<"\n\nArray element are "<<arr[i]<<"address is "<<&arr[i];
	
	cout<<"enter value to be entered in array\n";
	cin>>val;
	
	cout<<"enter position at which value needs to be entered";
	cin>>pos;
	
	for(i=n-1; i>pos-1; i--)
	{
		arr[i+1]=arr[i];	
	}
	
	arr[pos-1] =val;
	cout<<"array after insertion";
	for(i=0; i<=n; i++)
	{
		cout<<"\nResultant array is "<<arr[i];
	}

	return 0;
}
