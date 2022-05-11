#include <iostream>
/*  This program is for testing how to upload repositories 
to Github and the basics of algorithms*/

/*  Insertion Sort is a sorting algorithm 
where the array is split into sorted and unsorted parts
elements in the unsorted part are compared and placed in the
correct positions within the sorted part of the array*/


void insertionSort(int *A, int size) {  // takes 2 parameters (pointer to A array and the number of elements within.
    int i, j, key;  // variables declared for this function. i and j are indexes in the array, and key stores an element within the array
    for (i = 1; i < size; i++) {  // this for loop goes through the array (starting from the 2nd element in the array 
        key = A[i]; // each element to be compared is stored in key
        j = (i - 1);    // j represents an index in the array
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = (j - 1);
        }
        A[j + 1] = key;
    }
}

void printArray(int* A, int size) { // prints out the array given.
    for (int i = 0; i < size; i++)  // loops through the entire array
        std::cout << A[i] << std::endl;
}

int main() {
    int A[5] = { 12, 4, 14, 13, 2 };
    insertionSort(A, 5);
    printArray(A, 5);

    return 0;
}