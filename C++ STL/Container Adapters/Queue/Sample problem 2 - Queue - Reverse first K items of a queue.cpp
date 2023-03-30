#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

/*
    Reverse first K items of a queue

    Input 1: q = {10, 20, 30, 40, 50}
             k = 3
    Output 1: q = {30, 20, 10, 40, 50}

    Input 2: q = {10, 200, 30, 40, 50, 60}
             k = 4
    Output 2: q = {40, 30, 200, 10, 50, 60}
*/

void reverseK(queue<int> &q, int k) {
    if (q.empty() == true || k > q.size() || k <= 0)
        return;

    stack<int> s;

    for (int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }
    while (s.empty() == false)
    {
        q.push(s.top());
        s.pop();
    }
    for (int i = 0; i < q.size() - k; i++)
    {
        q.push(q.front());
        q.pop();
    }
}

// TC: O(n + k)

int main() {

    queue<int> q;
    q.push(10); q.push(200); q.push(30);
    q.push(40); q.push(50); q.push(60);

    int k;
    cin >> k;

    reverseK(q, k);

    return 0;
}