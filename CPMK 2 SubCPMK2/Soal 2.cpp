#include <iostream>
#include <algorithm>

using namespace std;

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int minIndex = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[minIndex]) {
        minIndex = j;
      }
    }
    if (i != minIndex) {
      swap(arr[i], arr[minIndex]);
    }
  }
}

void cetakArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int n;

  cout << "Masukkan jumlah elemen array: ";
  cin >> n;

  if (n <= 0) {
    cout << "Jumlah elemen harus lebih besar dari 0." << endl;
    return 1;
  }

  int *arr = new int[n];

  cout << "Masukkan elemen array (pisahkan dengan spasi): ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "Array awal: ";
  cetakArray(arr, n);

  selectionSort(arr, n);

  cout << "Array setelah diurutkan: ";
  cetakArray(arr, n);

  delete[] arr;

  return 0;
}