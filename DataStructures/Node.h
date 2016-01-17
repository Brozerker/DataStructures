#pragma once

class TreeNode {
	bool red;
	int value;
	TreeNode *parent, *leftChild, *rightChild;
public:
	TreeNode() {}
	TreeNode(int val) : value(val) {}
	TreeNode(int val, TreeNode * par) : value(val), parent(par) {}
	~TreeNode() {
		//if(parent)		delete parent;
		//if(leftChild)	delete leftChild;
		//if(rightChild)	delete rightChild;
	}

	int getValue() {
		return value;
	}
	TreeNode * getParent() {
		return parent;
	}
	TreeNode * getLeft() {
		return leftChild;
	}
	TreeNode * getRight() {
		return rightChild;
	}
	void setValue(int val) {
		value = val;
	}
	void setParent(TreeNode * par) {
		parent = par;
	}
	void setLeft(TreeNode * child) {
		leftChild = child;
	}
	void setRight(TreeNode * child) {
		rightChild = child;
	}
};