#include<iostream>
#include<queue>
using namespace std;

int main() {

    priority_queue<int> pq;
    pq.push(10);
    pq.push(15);
    pq.push(5);

    cout << pq.size() << " "; // 3
    cout << pq.top() << " "; // 15

    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    } // 15 10 5

    return 0;
}