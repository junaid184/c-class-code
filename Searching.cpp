#include<iostream>
using namespace std;

int main() {
	int search,a,b,i, index;
	int arr[]={10,5,12,9,7,1,2,30};
	for(i=0;i<=7;i++)
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
 cout<<"\n found at position"<<index+1;
}
