#include <iostream>
using namespace std;
int main() {
  int arr[] = {1, 0, 1, 0, 0, 0, 1, 0, 1, 1};
  int size = sizeof(arr) / sizeof(int);
  int temp = 0;

  cout << "Before: \n\n";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  cout << "After: \n\n";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << endl;
  }

  cout << "\n";
  return 0;
}