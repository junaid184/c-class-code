#include <iostream>
using namespace std;
int main()
{
	int c,first,last,mid,n,search,arr[100];
	cout<<"\nEnter numbers of Elements ";
	cin>>n;
	cout<<"Enter "<<n<<"elements";
	for(c=0;c<n;c++)
	{
		cin>>arr[c];
	}
	cout<<"Enter value to search";
	cin>>search;
	first=0;
	last=n-1;
	mid=(last+first)/2;
	while(first<=last)
	{
		if(arr[mid]<search)
		{
			first=mid+1;
		}
		else if(arr[mid]==search)
		{
			cout<<"Found at Position"<<mid+1;
			break;
		}
		else
		{
			last=mid-1;
		}
		/*if(first>last)
		{
			cout<<"not found";
		}*/
		
	}

	
	return 0;
}
