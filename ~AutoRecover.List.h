#pragma once
class List
{

	typedef struct node {
		int num;
		node*next;
	}node;


	node* current;
	node * temp;

public:

	node * head;

	List();
	void Addnode(int val);
	void DeleteNode(int val);
	void PrintList();
	void SwapList(List list);
	
};

