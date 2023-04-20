#include <iostream>
#include <unordered_map>
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
// Time complexity of map(storing and fetching):
// = O(1) for average and best cases
// = O(N) for worst cases
// where N is the number of elements in the map
int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
      cin >> a[i];

    unordered_map<int, int> mpp;
    // unordered_map<key_type, value_type>
    // for characters: unordered_map<char, int>

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
