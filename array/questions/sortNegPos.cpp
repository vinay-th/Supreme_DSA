#include <iostream>
using namespace std;
int main() {
  int arr[] = {23, -10, 12, -11, 40, 60};
  int size = sizeof(arr) / sizeof(int);
  int j = 0, temp;

  for (int i = 0; i < size; i++) {
    if (arr[i] < 0) {
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
      j++;
    }
  }

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  cout << "\n";
  return 0;
}