#include "stdafx.h"
#include "HashTable.h"


HashTable::HashTable() {
	table = new int[SIZE];
}

HashTable::~HashTable() {}

void HashTable::add(Node adding) {
	table[hash(adding.name)] = adding.phoneNum;
}

int HashTable::hash(string str) {
	return 0;
}

int HashTable::access(string name) {
	return table[hash(name)];
}
