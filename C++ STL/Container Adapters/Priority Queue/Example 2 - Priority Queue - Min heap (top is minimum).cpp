#include<iostream>
#include<queue>
using namespace std;

int main() {

    priority_queue<int, vector<int>, greater<int>>pq;
    // priority queue with minimum at the top

    pq.push(10);
    pq.push(15);
    pq.push(5);

    cout << pq.size() << " "; // 3
    cout << pq.top() << " "; // 5

    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }// 5 10 15

    return 0;
}