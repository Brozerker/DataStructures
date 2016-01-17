#pragma once
#include <string>
#include <vector>
using namespace std;

#define SIZE 100

//template <typename Type>
//struct Node {
//	int key;
//	Type value;
//	String str;
//	Node * next;
//};

struct Node {
	int phoneNum;
	string name;
	//Node * next;
};

class HashTable {
	//int tableSize = SIZE;
	int *table;
	//Node<int> table[SIZE];
public:
	HashTable();
	~HashTable();
	void add(Node);
	int hash(string);
	int access(string);
};

