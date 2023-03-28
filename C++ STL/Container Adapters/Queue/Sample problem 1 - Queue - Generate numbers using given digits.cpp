#include <iostream>
#include <queue>
using namespace std;

/*
    Given a number n, print first n numbers (in increasing order) such that all these numbers have digits in set {5, 6}

    Input 1: n = 10
    Output 1: 5, 6, 55, 56, 65, 66, 555, 556, 565, 566

    Input 2: n = 4
    Output 2: 5, 6, 55, 56

    Note: n can be a big number and the result values might not fit in basic data type like long int or long long int.
*/

void printFirstN(int n) {
    queue<string> q;

    q.push("5");
    q.push("6");
    for (int count = 0; count < n; count++)
    {
        string curr = q.front();
        cout << curr << " ";
        q.pop();
        q.push(curr + "5");
        q.push(curr + "6");
    }
}

// TC: O(n)

int main() {

    int n;
    cin >> n;

    printFirstN(n);

    return 0;
}