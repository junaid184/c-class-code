#include<iostream>
using namespace std;
int stack[100], n, top, x, i, choice;
void push(){
	int val;
	cout<<"Enter any number"<<endl;
	cin>>val;
	if(top == n-1)
	{
		cout<<"overflow"<<endl;
	}
	else
	{
		top++;
		stack[top] = val;
	}
}
void pop()
{
	int val;
	int item = val;
	if(top == -1)
	{
		cout<<"underflow"<<endl;
	}
	else{
		item = stack[top];
		top--;
		cout<<"the fetched item is: "<<item<<endl;
	}
}

void display()
{
	if(top>=0)
	{
		cout<<"the elements in stack"<<endl;
		for(i=top; i>=0; i--)
		{
			cout<<" "<<stack[i];
		}
	}
	else
	{
		cout<<"the stack is empty"<<endl;
	}
}
int main()
{
   top = -1;
   cout<<"Enter the size of stack[max=100]"<<endl;
   cin>>n;
   cout<<"stack operation using array"<<endl;
   cout<<"---------------------------"<<endl;
   cout<<"\n 1. push \n 2. pop \n 3. display \n exit"<<endl;
   do
   {
   		cout<<"\n enter the choice"<<endl;
   		cin>>choice;
   		switch(choice)
   			{
   				case 1:
   					{
   						push();
   						break;
					   }
				case 2:
					{
						pop();
						break;
					}
				case 3:
					{
						display();
						break;
					}
				case 4: 
					{
						cout<<"exit";
						break;
					}
				default:
					{
						cout<<"please enter a valid choice";
					}
			}
	
			
   }
   
   while(choice!=4);
   return 0;
}
