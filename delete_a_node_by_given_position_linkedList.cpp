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

void Insert(Node* hd, int x)
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

void Delete(Node* hd, int pos)
{
	Node* temp = new Node();
	Node* prev = new Node();
	int i=0;
	if(hd->next == NULL)
	{
		cout<<"Empty Linked List!"<<endl;
		return;
	}

	while(hd->next != NULL)
	{
		if(i==pos && i)
		{
			temp = prev->next;
			prev->next = hd->next;
			delete temp;
			return;
		}
		prev = hd;
		hd = hd->next;
		++i;
	}
	if(pos==i)
	{
		temp = prev->next;
		prev->next = NULL;
		delete temp;
	}
	else cout<<"Invalid position"<<endl;
}

int main()
{
	Node* head = new Node();
	head->next = NULL;
	Insert(head,1);
	Insert(head,3);
	Insert(head,2);
	Insert(head,5);
	Insert(head,3);
	Print(head->next);
	puts("");
	int c;
	cout<<"Enter How many element wants to delete: ";
	scanf("%d",&c);
	for(int i=0; i<c; i++)
	{
		int pos;
		puts("");
		cout<<"Enter the position of data: ";
		scanf("%d",&pos);
		Delete(head,pos);
		cout<<"After delete a node new linked list: ";
		Print(head->next);
		puts("");
	}		

	return 0;
}