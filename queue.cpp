#include<iostream>
#include<conio.h>
using namespace std;
int n;
int qu[100];
int front=-1;
int rear=-1;

void enqueue()
{
	int val;
	if(rear == n-1)
	{
		cout<<"over flow"<<endl;
	}
	else if(front == -1 && rear == -1)
	{
		front = rear= 0;
		cout<<"enter value"<<endl;
		cin>>val;
		qu[rear] = val;
	}
	else
	{
		cout<<"enter value"<<endl;
		cin>>val;
		rear++;
		qu[rear] = val;
	}
}

void dequeue()
{
	if(front == -1 && rear == -1)
	{
		cout<<"under flow"<<endl;
	}
	else if(front == rear)
	{
		front = rear = -1;
	}
	else
	{
		cout<<"\n "<<qu[front];
		front++;
	}
}

void display()
{
	if(front == -1 && rear == -1)
	{	
		cout<<"the queue is empty"<<endl;
	}
	else
	{
		cout<<"the elements in queue"<<endl;
		for(int i=0; i<=n; i++)
		{
			cout<<" "<<qu[i];
		}
	}
}
int main()
{
	int choice;
	cout<<"Enter the size of queue[max=100]"<<endl;
   	cin>>n;
   	cout<<"stack operation using array"<<endl;
   	cout<<"---------------------------"<<endl;
   	cout<<"\n 1. enqueue \n 2. deqeue \n 3. display \n 4. exit"<<endl;
	 do
   {
   		cout<<"\n enter the choice"<<endl;
   		cin>>choice;
   		switch(choice)
   			{
   				case 1:
   					{
   						enqueue();
   						break;
					   }
				case 2:
					{
						dequeue();
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
}
