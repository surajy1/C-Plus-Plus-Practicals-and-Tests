#include<iostream>
#include<queue>
using namespace std;

int main() {

    int arr[] = {10, 5, 15};
    for (int i = 0; i < 3; i++)
        arr[i] = -arr[i];
    priority_queue<int> pq(arr, arr + 3); // TC: O(n)

    while (pq.empty() == false)
    {
        cout << -pq.top() << " ";
        pq.pop();
    }// 5 10 15

    return 0;
}