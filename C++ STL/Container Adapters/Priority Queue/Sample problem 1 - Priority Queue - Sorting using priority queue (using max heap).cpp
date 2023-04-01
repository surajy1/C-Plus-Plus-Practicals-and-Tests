#include<iostream>
#include<queue>
using namespace std;

void mySort(int arr[], int n) {
    // Max heap
    priority_queue<int> pq(arr, arr + n);

    for (int i = n - 1; i >= 0; i--)
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

    return 0;
}