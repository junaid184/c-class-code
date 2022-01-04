#include<iostream>
using namespace std;
void towerofhanoi(int n, char a, char b, char c)
{
	if(n==1)
	{
		cout<<"move disk 1 from rod "<<a<<" to "<<c<<endl;
		return;
	}
	else{
		towerofhanoi(n-1, a, c, b);
		cout<<"move disk "<<n<<" from rod "<<a<<" to rod "<<c<<endl;
		towerofhanoi(n-1, b,a,c);
	}
}

int main()
{
	int n;
	cout<<"Enter number of disks: "<<endl;
	cin>>n;
	towerofhanoi(n,'A','B','C');
	return 0;
}
