#include<iostream>
#include<queue>
using namespace std;

/*
    K largest elements in an array
    Input 1: arr[] = {5, 15, 10, 20, 8}, K = 2
    Output 1: 15 20

    Input 2: arr[] = {8, 6, 4, 10, 9}, K = 3
    Output 2: 8 9 10
*/

void printKlargest(int arr[], int n, int k) {
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + k);

    for (int i = k; i < n; i++)
    {
        if (arr[i] > pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }
}

// TC: O(k + n log k)

int main() {

    int arr[] = {8, 6, 4, 10, 9};
    int k = 3;
    printKlargest(arr, 5, k);
    // 8 9 10

    return 0;
}