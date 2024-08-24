#include <iostream>
using namespace std;
int num;
int userValue() {
  int a;
  cout << "Enter a number: ";
  cin >> a;
  return a;
}
void digitToNum() {
  int n = 0;
  cout << "\nEnter the digits as you want and when you want to terminate enter "
          "'-1'\n\n";
  while (n != -1) {
    int n = userValue();
    if (n == -1) {
      break;
    }
    num = (num * 10) + n;
    cout << "Number created so far: " << num << endl;
  }
}
int main() {
  int n;
  digitToNum();
  cout << "\nThe number is : " << num;

  cout << "\n";
  return 0;
}