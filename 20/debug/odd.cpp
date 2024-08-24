#include <iostream>
using namespace std;
void populate(int arr[], int n) {
  int j = 0;
  for (int i = 0; i < n; i = i + 2) {
    arr[n - j] = i + 2;
    arr[j] = i + 1;
    j++;
  }
}
int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  int arr[n];
  populate(arr, n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  return 0;
}