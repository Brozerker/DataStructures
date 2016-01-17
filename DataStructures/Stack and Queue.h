#pragma once
#include "LinkedList.h"

class Stack {
	LLNode * head;
	int count;
public:
	Stack() : count(0) {}
	~Stack() {
		delete head;
	}

	void push(int val) {
		LLNode * toAdd = new LLNode();
		toAdd->data = val;
		if (!head) {
			head = toAdd;
			count++;
			return;
		}
		toAdd->next = head;
		head = toAdd;
		count++;
	}

	LLNode * pop() {
		LLNode * temp = head;
		if (head->next) 
			head = head->next;
		count--;
		return temp;
	}
};

class Queue {
	LLNode * head;
	int count;
public:
	Queue() : count(0) {}
	~Queue() {
		delete head;
	}

	void push(int val) {
		LLNode * toAdd = new LLNode();
		toAdd->data = val;
		if (!head) {
			head = toAdd;
			count++;
			return;
		}
		toAdd->next = head;
		head = toAdd;
	}

	LLNode * pop() {
		LLNode * iter = head;
		LLNode * prev = NULL;
		while (iter->next != NULL) {
			prev = iter;
			iter = iter->next;
		}
		if (prev)
			prev->next = NULL;
		count--;
		return iter;
	}
};