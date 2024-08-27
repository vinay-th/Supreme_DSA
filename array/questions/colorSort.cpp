#include <iostream>
using namespace std;
int main() {
  int arr[] = {0, 1, 1, 2, 0, 2, 1};
  int size = sizeof(arr) / sizeof(int);
  int left = 0, right = size - 1, temp;

  for (int i = 0; i <= right; i++) {
    if (arr[i] < 1) {
      temp = arr[i];
      arr[i] = arr[left];
      arr[left] = temp;
      left++;
    } else if (arr[i] > 1) {
      temp = arr[i];
      arr[i] = arr[right];
      arr[right] = temp;
      right--;
      i--;
    }
  }

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  cout << "\n";
  return 0;
}