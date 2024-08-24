#include <iostream>
using namespace std;
int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  int *arr = new int[n];

  for (int i = 0; i < n; i++) {
    cout << "Enter the value: ";
    cin >> arr[i];
  }

  cout << "The values: \n\n";
  for (int i = 0; i < n; i++) {
    cout << "the value: " << arr[i] << endl;
  }

  cout << "\n";
  return 0;
}