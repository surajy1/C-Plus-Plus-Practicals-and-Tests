#include <iostream>
#include <map>
using namespace std;

/*
Input: 
7
1 2 3 1 3 2 12
5
1
2
3
4
12

Output:
1->2
2->2
3->2
12->1
2
2
2
0
1
*/
// Time complexity of map(storing and fetching) = (log N), for all test case including best, average and worst
int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];

    map<int, int> mpp;
    // map<key_type, value_type>
    // for characters: map<char, int>

    // pre-compute
    for (int i = 0; i < n; i++) {
      mpp[a[i]]++;
    }

    // iterate in the map
    for (auto it : mpp)
      cout << it.first << "->" << it.second << endl;

    // queries for frequencies
    int q; cin >> q;
    while (q--) {
      int num;
      cin >> num;
      cout << mpp[num] << "\n";
    }

    return 0;
}
