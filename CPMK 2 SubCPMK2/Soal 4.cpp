#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void mergeAndSort(int A[], int sizeA, int B[], int sizeB) {
    int mergedSize = sizeA + sizeB;
    int merged[mergedSize];

    for (int i = 0; i < sizeA; ++i) {
        merged[i] = A[i];
    }
    for (int i = 0; i < sizeB; ++i) {
        merged[sizeA + i] = B[i];
    }


    sort(merged, merged + mergedSize);


    for (int i = 0; i < mergedSize; ++i) {
        A[i] = merged[i];
    }
}

int main() {
    int A[] = {1, 3, 5, 7, 9};
    int sizeA = sizeof(A) / sizeof(A[0]);

    int B[] = {2, 4, 6, 8, 10};
    int sizeB = sizeof(B) / sizeof(B[0]);

    mergeAndSort(A, sizeA, B, sizeB);

    cout << "Array A setelah digabungkan dan diurutkan: ";
    for (int i = 0; i < sizeA + sizeB; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}