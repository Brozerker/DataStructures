#pragma once
#include <iostream>
struct LLNode {
	int data;
	LLNode * next;
};

class LinkedList {
protected:
	LLNode * head;
public:
	LinkedList() {}
	void addElement(int val) {}
	void print() {
		LLNode * iter = head;
		while (iter != nullptr) {
			printf("%d ", iter->data);
			iter = iter->next;
		}
	}
};