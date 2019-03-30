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
	printf("%d ",hd->data);
	Print(hd->next);
}

void Insert(Node* hd, int n)
{
	Node* temp = new Node();
	temp->data = n;
	temp-> next = NULL;
	while(hd->next != NULL)
	{
		hd = hd->next;
	}
	hd->next = temp;
}

void Revers(Node* hd, Node* hd1)
{
	if(hd1->next == NULL)
	{
		hd->next = hd1;
		return;
	}
	Revers(hd,hd1->next);
	
// 	we can use this way : 
// 	Node* temp = new Node();
// 	temp = hd1->next;
// 	temp->next = hd1;
	
// 	also can use this way: 
	hd1->next->next = hd1;
	
	hd1->next = NULL;
}

int main()
{
	Node* head = new Node();
	Insert(head,1);
	Insert(head,2);
	Insert(head,3);
	Insert(head,4);
	Insert(head,5);
	Print(head->next);
	puts("");
	Revers(head, head->next);
	Print(head->next);
	puts("");	
	return 0;
}
