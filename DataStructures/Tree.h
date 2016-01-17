#pragma once


template <typename T>
abstract class Tree {
protected:
	int m_childCount;
	T * head;
public:
	virtual Tree();
	virtual ~Tree();
	//virtual T * getHead();
	//virtual void setHead();
	virtual void populateTree();
};

