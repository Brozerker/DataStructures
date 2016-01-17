// DataStructures.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <random>
#include <time.h>
#include "Stack and Queue.h"
#include "BinaryTree.h"
#include "Sorting.h"

#define SIZE 25
int main() {
	sorting sort;
	BST bst;
	int * arr = new int[SIZE];
	Queue q;
	Stack s;
	srand(clock());
	for (int i = 0; i < SIZE; ++i) {
		srand(i);
		q.push(i);
		s.push(i);
		arr[i] = rand() % 100;
	}
	//bst.populateTree(arr, SIZE);
	printf("Queue: ");
	for (int i = 0; i < SIZE; ++i) {
		printf("%d ", q.pop()->data);
	}
	printf("\nStack: ");
	for (int i = 0; i < SIZE; ++i) {
		printf("%d ", s.pop()->data);
	}
	//printf("\nBST: ");
	//bst.print();
	//sort.quicksort(arr, SIZE);
	sort.mergesort(arr, SIZE);
	sort.print(arr, SIZE);
    return 0;
}

