#include <iostream>
using namespace std;
int main() {
  int cases;
  cin >> cases;
  for (int i = 1; i <= cases; ++i) {

    // read input
    int items;
    cin >> items;

    long long int days;
    cin >> days;

    // get list
    long long int* list = new long long int[items];
    for (int item = 0; item < items; ++item)
      cin >> list[item];

    // iterate over days and check from the last one
    long long int last = days;
    double m;
    int t;
    for (int c = items-1; c >= 0; --c) {
      m = double(last) / double(list[c]);
      last = (long long int)m * list[c];
    }
    cout << "Case #" << i << ": " << last << endl;
  }
  return 0;
}
