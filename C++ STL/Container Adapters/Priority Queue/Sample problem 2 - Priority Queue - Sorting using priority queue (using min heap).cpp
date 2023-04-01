#include<iostream>
#include<queue>
using namespace std;

void mySort(int arr[], int n) {
    // Min heap
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n);

    for (int i = 0; i < n; i++)
    {
        arr[i] = pq.top();
        pq.pop();
    }
}

// TC: O(n log n)

int main() {

    int arr[] = {10, 5, 15};
    mySort(arr, 3);

    for (int x : arr)
        cout << x << " ";
    // 5 10 15

    return 0;
}