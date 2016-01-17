#pragma once
#include <algorithm>

class sorting {
public:
	void quicksort(int * arr, int length) {
		if (length < 2) {
			return;
		}
		int pivotIndex = length / 2;
		int pivotData = arr[pivotIndex];
		int leftCount = 0;
		for (int i = 0; i < length; ++i) {
			if (arr[i] < pivotData) leftCount++;
		}

		int * left = new int[leftCount];
		int * right = new int[length - leftCount - 1];

		int l = 0, r = 0;
		for (int i = 0; i < length; ++i) {
			if (i == pivotIndex)
				continue;
			int value = arr[i];
			if (value < pivotData) {
				left[l++] = value;
			} else {
				right[r++] = value;
			}
		}

		quicksort(left, l);
		quicksort(right, r);

		int index = 0;
		for (int i = index; i < l; ++i) {
			arr[index++] = left[i];
		}
		arr[index++] = pivotData;
		for (int i = 0; i < r; ++i) {
			arr[index++] = right[i];
		}
	}

	void mergesort(int * arr, int length) {
		if (length < 2)
			return;
		int middle = length / 2;
		int * left = new int[middle];
		int * right = new int[length - middle];

		for (int i = 0; i < middle; ++i) {
			left[i] = arr[i];
		}
		for (int i = 0; i < length-middle; ++i) {
			right[i] = arr[middle + i];
		}

		int leftSize = middle;
		int rightSize = length - middle;
		
		mergesort(left, leftSize);
		mergesort(right, rightSize);

		merge(arr, left, right, length, leftSize, rightSize);
	}
	void radixsort(int arr[]) {

	}
	void print(int * arr, int length) {
		printf("\n");
		for (int i = 0; i < length; ++i) {
			printf("%d ", arr[i]);
		}
	}
private:
	void merge(int * dest, int * left, int * right,
		int destLength, int leftLength, int rightLength) {
		int dIndex = 0, lIndex = 0, rIndex = 0;

		while (lIndex < leftLength && rIndex < rightLength) {
			if (left[lIndex] <= right[rIndex]) {
				dest[dIndex++] = left[lIndex++];
			}
			else {
				dest[dIndex++] = right[rIndex++];
			}
		}
		while(lIndex < leftLength) 
			dest[dIndex++] = left[lIndex++];
		while(rIndex < rightLength) 
			dest[dIndex++] = right[rIndex++];
	}	
 };
