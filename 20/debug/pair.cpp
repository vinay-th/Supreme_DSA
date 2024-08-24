#include <iostream>
using namespace std;
int pairSumToX(int input[], int size, int x) {
  int pairs = 0;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (input[i] + input[j] == x)
        pairs++;
    }
  }
  return pairs;
}
int main() {
  int input[] = {1, 2, 3, 4, 5};
  int size = sizeof(input) / sizeof(input[0]);
  int x = 5;
  int pairs = pairSumToX(input, size, x);
  cout << "Number of pairs: " << pairs << endl;
  return 0;
}