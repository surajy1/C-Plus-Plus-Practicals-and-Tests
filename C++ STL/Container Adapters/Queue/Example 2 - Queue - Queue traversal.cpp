#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q;
    q.push(10); // q = {10}
    q.push(20); // q = {10, 20}
    q.push(30); // q = {10, 20, 30}

    cout << q.size() << endl; // 3

    while (q.empty() == false)
    {
        cout << q.front() << " " << q.back() << endl;
        q.pop();
    }
    // 10 30
    // 20 30
    // 30 30

    return 0;
}