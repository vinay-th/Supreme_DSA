#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int val) {
  int i;
  for (i = 0; i < n; i++) {
    if (arr[i] == val) {
      break;
    }
  }
  return i;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int val = 3;
  int index = linearSearch(arr, n, val);
  if (index == n) {
    cout << "Element not found" << endl;
  } else {
    cout << "Element found at index: " << index << endl;
  }
  return 0;
}