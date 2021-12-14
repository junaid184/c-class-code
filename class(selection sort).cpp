#include<iostream>
#include<conio.h>
using namespace std;
void selectionSort(int arr[])
{
	int i, minInd, n=10, j;
	for(i=0; i<=n-1; i++)
	{
		minInd=i;
		for(j=i+1; j<=n; j++)
		{
			if(arr[j]<arr[minInd])
			{
				minInd=j;
			}
		}
		//swapping
		if(minInd!=i)
		{
			int temp;
			temp = arr[minInd];
			arr[minInd] = arr[i];
			arr[i] = temp;
		}
	}
}
int main()
{
	cout<<"****Selection Sort****"<<endl;
	int arr[10], i;
    for(i=0; i<=10; i++)
	{
		cout<<"Enter arr["<<i<<"]";
		cin>>arr[i];
	}
	int n = 10;
	selectionSort(arr);
	cout<<"The sorted array is: "<<endl;
	for(int j=0; j<=10; j++)
	{
		cout<<arr[j]<<" ";
	}
}
