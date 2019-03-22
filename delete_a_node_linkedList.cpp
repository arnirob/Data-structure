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
	printf("%d ",hd->data );
	Print(hd->next);		
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

void Delete(Node* hd, int x)
{
	Node* prev = new Node();
	// prev = hd->next;
	bool f = 1;
	while(hd->next != NULL)
	{
		if(hd->data == x)
		{
			prev->next = hd->next;
			f=0;
			hd = hd->next;
			continue;
		}
		prev = hd;
		hd = hd->next;		
	}
	if(hd->data == x)
	{
		prev->next = NULL;
		f=0;
	}
	if(f) cout<<"There is no value such "<<x<<endl;
}

int main()
{
	Node* head = new Node();
	head->next = NULL;

	cout<<"Enter how many numbers to insert: ";
	int n,x;
	cin>>n;
	cout<<"Enter numbers:"<<endl;
	for(int i=0; i<n; i++)
	{
		scanf("%d",&x);
		Push(head,x);
	}
	cout<<"All data in linked list: ";
	Print(head->next);
	puts("");
	cout<<"Enter how many number wants to delete: ";	
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"Enter value to delete: ";
		scanf("%d",&x);
		Delete(head,x);		
		cout<<"New linked list after delete a data: ";
		Print(head->next);
		puts("");
		puts("");
	}
	return 0;
}