//Deletion
#include<iostream>
using namespace std;
int main()
{
	int i,n=7,val,pos;
	int arr[10]={45,65,33,54,87,99};
	for(i=0;i<n-1;i++)
	cout<<"\nResultant array is "<<arr[i];
	
	cout<<"\n enter position of value\n";
	cin>>pos;
	
	if(pos>=n+1)
	{
		cout<<"deletion not possible";
	}
	else
	{
		for(i=pos-1;i<=n-1;i++) //pos = 4
		arr[i]=arr[i+1];
		
		for(i=0;i<6;i++)
		cout<<"\nResultant array is "<<arr[i];
	}
}
