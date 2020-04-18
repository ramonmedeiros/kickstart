#include <iostream>
using namespace std;
int main() {
  int cases;
  cin >> cases;
  for (int i = 1; i <= cases; ++i) {

    // read input
    int checkpoints;
    cin >> checkpoints;

    // get list
    int* list = new int[checkpoints];
    for (int checkpoint = 0; checkpoint < checkpoints; ++checkpoint)
      cin >> list[checkpoint];

    // count peeks
    int peeks = 0;
    for (int c = 1; c < (checkpoints -1); ++c) {
      if ( (list[c] > list[c-1]) && (list[c] > list[c+1]) )
        peeks = peeks + 1;
    }

    cout << "Case #" << i << ": " << peeks << endl;
  }
  return 0;
}
