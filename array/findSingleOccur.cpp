#include <iostream>
using namespace std;
int main() {
  int arr[] = {1, 2, 3, 2, 1};
  int res = 0;
  int size = sizeof(arr) / sizeof(int);
  for (int i = 0; i < size; i++) {
    res = res ^ arr[i];
  }

  cout << "Unique is " << res << endl;

  cout << "\n";
  return 0;
}