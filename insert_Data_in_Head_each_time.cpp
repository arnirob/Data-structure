#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node* next;
};

//  globally declared header node.
struct Node* head = NULL;

void Print()
{
	// Node* temp = new Node();
	// temp = head;
	struct Node* temp = head;

	printf("Numbers: ");
	while(temp != NULL)
	{
		printf("%d ",temp->data);
		temp = temp->next;
	}
}

void Push(int x)
{
	Node* temp = new Node();	
	temp->data = x;
	temp->next = head;
	head = temp;
	Print();
}

int main()
{	
	// head = NULL;
	printf("Enter how much data wants to insert: ");
	int x,n;
	scanf("%d",&n);
	printf("Enter Numbers:\n");
	for(int i=0; i<n; i++)
	{
		scanf("%d",&x);
		Push(x);
		puts("");
	}
	puts("");	
	return 0;
}