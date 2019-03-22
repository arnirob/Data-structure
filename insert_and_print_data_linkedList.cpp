#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

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

void Print(Node* hd)
{
	if(hd == NULL) return;
	printf("%d ",hd->data);
	Print(hd->next);
}

int main()
{
	// creating header node for initial address
	Node* head = new Node();
	head->next = NULL;

	int n,x;
	printf("Enter how much data wants to insert: ");
	scanf("%d",&n);
	puts("");
	printf("Insert data: ");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&x);
		Push(head, x);
	}
	puts("");
	Print(head->next);

	return 0;
}
