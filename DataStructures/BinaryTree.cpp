#pragma once
#include "stdafx.h"
#include "BinaryTree.h"

BST::BST() {}
BST::~BST() {}
void BST::populateTree(int * arr, int aSize) {
	head = new TreeNode(arr[0]);
	//int aSize = sizeof(arr) / sizeof(arr[0]);
	int headVal = head->getValue();
	for (int i = 1; i < aSize; ++i) {
		int currentData = arr[i];
		populate(currentData, head);
		//if (currentData < headVal) {
		//	populateLeft(currentData, head);
		//	continue;
		//}
		//populateRight(currentData, head);

	}
}

void BST::populate(int value, TreeNode * current) {
	if (value < current->getValue()) {
		TreeNode * left = current->getLeft();
		if (!left) {
			current->setLeft(new TreeNode(value, current));
			index++;
			//delete left;
			return;
		}
		populate(value, left);
		////delete left;
		return;
	}
	TreeNode * right = current->getRight();
	if (!right) {
		current->setRight(new TreeNode(value, current));
		index++;
		////delete right;
		return;
	}
	populate(value, right);
	////delete right;
}

void BST::print() {
	printDescendants(head->getLeft());
	printf("%d ", head->getValue());
	printDescendants(head->getRight());
}

void BST::printDescendants(TreeNode * current) {
	TreeNode * left = current->getLeft();
	TreeNode * right = current->getRight();
	if (left)
		printDescendants(left);
	printf("%d ", current->getValue());
	if (!right)
		return;
	printDescendants(right);
	//delete left;
	//delete right;
}
