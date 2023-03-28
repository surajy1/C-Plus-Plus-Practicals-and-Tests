#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> q;
    q.push(10); // q = {10}
    q.push(20); // q = {10, 20}
    q.push(30); // q = {10, 20, 30}

    cout << q.front() << " " << q.back() << endl; // 10 30
    q.pop(); // q = {20, 30}
    cout << q.front() << " " << q.back() << endl; // 20 30

    return 0;
}