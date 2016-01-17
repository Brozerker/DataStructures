#pragma once
#include "Stack and Queue.h"
#include "Node.h"


class BST {
	TreeNode * head;
	int index = 0;
public:
	BST();
	~BST();
	void populateTree(int * arr, int aSize);
	void populate(int value, TreeNode * current);
	void print();
	void printDescendants(TreeNode * current);
};
