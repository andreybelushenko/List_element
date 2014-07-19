#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
#include <string>
#include "list_test_task.h"

void Node_int::show()
{
	cout << x << " ";
}

void Node_float::show()
{
	cout << x << " ";
}

void Node_string::show()
{
	cout << x << " ";
}

List::~List() 
{
	clean_list();
}

void List::add_to_list (Node* new_node)
{
 new_node->next = 0;
 if (head != 0)
 {
  new_node->prev = tail;
  tail->next = new_node;
  tail = new_node;
 }
 else
 {
  new_node->prev = 0;
  head = tail = new_node;
 }
}

void List::add(int x)
{
	Node_int *new_node = new Node_int;
	new_node->x = x;
	add_to_list(new_node);
}

void List::add(float x)
{
	Node_float *new_node = new Node_float;
	new_node->x = x;
	add_to_list(new_node);
}

void List::add(string x)
{
	Node_string *new_node = new Node_string;
	new_node->x = x;
	add_to_list(new_node);
}

void List::show_backward()
{
	Node *new_node = tail;
	
	while (new_node != 0) 
	{
		new_node->show();
		new_node = new_node->prev; 
	}
	cout << "\n";
}

void List::show_forward()
{
	Node *new_node = head;
	while (new_node != 0)
	{
		new_node->show();
		new_node = new_node->next;
	}
	cout << "\n";
}

void List::clean_list()
{
	while (head != 0)
	{
		tail = head->next;
		delete head;
		head = tail;
	}
}

int List::number_nodes()
{
	Node *new_node = tail;
	int count = 0;
	while (new_node != 0)
	{
		count++ ;
		new_node = new_node->prev;
	}
	cout << "number_nodes in list " << count << endl;
	return count;
}

