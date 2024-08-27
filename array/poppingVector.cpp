#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v, int n) {
  for (int i = 0; i < n; i++) {
    cout << v[i] << endl;
  }
}

int main() {
  vector<int> arr;

  arr.push_back(1);
  arr.push_back(2);
  arr.push_back(3);
  arr.push_back(4);
  arr.push_back(5);
  arr.push_back(6);

  int size = arr.size();

  cout << "Before: \n";
  print(arr, size);

  arr.pop_back();
  arr.pop_back();

  size = arr.size();

  cout << "\n\nAfter: \n";
  print(arr, size);

  cout << "\n";
  return 0;
}