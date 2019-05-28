#include "List.h"
#include <iostream>

using namespace std;

List::List() {

	head =NULL;
	current = NULL;
	temp = NULL;

}

void List:: Addnode(int val) {
	node*newp = new node();
	newp->next = NULL;
	newp->num = val;

	if (head != NULL) {

		current = head;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = newp;

	}
	else {

		head = newp;
	}

}

void List::PrintList() {
	this->current = this->head;
	while (this->current != NULL) {
		cout << this->current->num << endl;
		this->current = current->next;
	}
}
void List::DeleteNode(int val) {
	
	this->current = head;
	this->temp = current->next->next;
	while ((current->next->num != val)&&(current!=NULL)) {
		current = current->next;
	}
	this->temp = current->next->next;
	delete(current->next);
	current->next = temp;
}

void List:: SwapList(List list) {
	node*newp;

}


