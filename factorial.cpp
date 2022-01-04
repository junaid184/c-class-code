#include<iostream>
using namespace std;

double factorial(double n){
	if(n<=1)
	{
		return n;
	}
	else
	{
		return n*factorial(n-1);
	}
}
int main()
{
	double a;
	cout<<"enter number for factorial"<<endl;
	cin>>a;
	cout<<"the factorial of given number is: "<<factorial(a);

	
	return 0;
}
