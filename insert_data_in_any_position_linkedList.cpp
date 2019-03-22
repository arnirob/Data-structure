#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

void Print(Node* hd)
{
	if(hd == NULL) return;
	printf("%d ", hd->data);
	Print(hd->next);
}

void Push_new(Node* hd, int pos, int dt)
{
	Node* temp = new Node();
	temp->data = dt;
	int i=0;
	bool f=1;
	while(hd->next != NULL)
	{
		if(i==pos)
		{
			temp->next = hd->next;
			hd->next = temp;
			f=0;
			break;
		}
		hd = hd->next;
		++i;
	}
	if(i==pos && f)
	{
		hd->next = temp;
		temp->next = NULL;		
	}	
	else if(f)
	 cout<<"Position Invalid"<<endl;	
}

void Push(Node* hd, int x)
{
	Node* temp = new Node();
	temp->data = x;
	temp->next = NULL;
	while(hd->next != NULL)
	{
		hd = hd->next;
	}
	hd->next = temp;
}

int main()
{
	Node* head = new Node();
	head->next = NULL;
	cout<<"Enter how many data wants to insert: ";
	int n,x;
	scanf("%d",&n);
	cout<<"Insert data:"<<endl;
	for(int i=0; i<n; i++)
	{
		scanf("%d",&x);
		Push(head,x);
	}
	cout<<"All data in linked list: ";
	Print(head->next);
	puts("");
	puts("");

	cout<<"Enter how many new data wants to insert: ";
	int nw,ps,dt;
	scanf("%d",&nw);
	for(int i=0; i<nw; i++)
	{
		cout<<"Enter Position: ";
		cin>>ps;
		cout<<"Enter Data: ";
		cin>>dt;
		Push_new(head,ps-1,dt);
		cout<<"New linked list: ";
		Print(head->next);
		puts("");
		puts("");
	}	

	return 0;
}