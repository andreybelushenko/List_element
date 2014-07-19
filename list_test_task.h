#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
#include <string>

class Node
{
private:
	Node *next;
	Node *prev;
public:

	virtual ~Node(){};
	virtual void show() = 0;
	friend class List;

};

class Node_int : public Node
{
private:
	int x;
public:
	void show();
	friend class List;

};

class Node_float : public Node
{
private:
	float x;
public:
	void show();
	friend class List;

};

class Node_string : public Node
{
private:
	string x;
public:
	void show();
	friend class List;
};

class List
{
private:
	Node *head;
	Node *tail;
public:

	List() :head(0), tail(0){};
	~List();
	void add(int x);
	void add(float x);
	void add(string x);
	void show_forward();
	void show_backward();
	void clean_list();
	int number_nodes();
	void add_to_list(Node* new_node);
};