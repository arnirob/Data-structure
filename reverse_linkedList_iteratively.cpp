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

void Insert(Node* hd, int n)
{
	Node* temp = new Node();
	temp->data = n;
	temp->next = NULL;
	while(hd->next != NULL)
	{
		hd = hd->next;
	}
	hd->next = temp;
}

void Revers(Node* hd1, Node* hd)
{
	Node* temp = new Node();
	Node* temp2 = new Node();
	temp2->next = NULL;
	while(hd->next != NULL)
	{
		temp->next = hd->next;
		hd->next = temp2->next;
		temp2->next = hd;
		hd = temp->next;
	}
	hd->next = temp2->next;
	hd1->next = hd;
	Print(hd1->next);
}

int main()
{
	Node* head = new Node();
	head->next = NULL;
	Insert(head,1);
	Insert(head,2);
	Insert(head,3);
	Insert(head,4);
	Insert(head,5);	
	Print(head->next);
	puts("");
	Revers(head,head->next);	
	return 0;
}