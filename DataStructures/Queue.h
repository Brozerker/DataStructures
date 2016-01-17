#pragma once
#include "LinkedList.h"
class Queue : LinkedList {
	LLNode * head;
public:
	void push(int val) {
		if (!head) {
			head = &LLNode(val, nullptr, nullptr);
			return;
		}
		LLNode * toAdd = &LLNode(val, nullptr, head);
		head->previous = toAdd;
		head = toAdd;
	}

	LLNode * pop() {
		LLNode * iter = head;
		LLNode * prev = nullptr;
		int i = 0;
		while (iter->next != nullptr) {
			prev = iter;
			iter = iter->next;
			i++;
		}
		prev->next = nullptr;
		return iter;
	}
};