#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> v) {
  for (auto x : v) {
    cout << x << " ";
  }
}
int main() {
  vector<int> arr; // an array
  int n, temp;

  cout << "Enter the size of array: ";
  cin >> n;

  for (int i = 0; i < n; i++) {
    cout << "Enter the value for arr[" << i << "]: ";
    cin >> temp;
    arr.push_back(temp);
  }
  print(arr);

  // to clear the vector and memory alloted
  arr.clear();
  cout << "\n";
  return 0;
}