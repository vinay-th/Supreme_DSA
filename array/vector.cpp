#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> v) {
  int size = v.size();
  for (int i = 0; i < size; i++) {
    cout << v[i] << endl;
  }
}
int main() {
  vector<int> arr; // an array

  arr.push_back(1);
  arr.push_back(2);
  arr.push_back(3);

  print(arr);

  cout << "\n";
  return 0;
}