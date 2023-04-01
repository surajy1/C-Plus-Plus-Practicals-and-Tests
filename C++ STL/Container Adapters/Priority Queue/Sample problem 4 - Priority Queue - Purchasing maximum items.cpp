#include<iostream>
#include<queue>
using namespace std;

/*
    Purchasing maximum items
    Input 1: cost[] = {1, 12, 5, 111, 200}, sum = 10
    Output 1: 2

    Input 2: cost[] = {20, 10, 5, 30, 100}, sum = 35
    Output 2: 3
*/

void purchaseMax(int arr[], int n, int sum) {
    priority_queue<int, vector<int>, greater<int>> pq(arr, arr + n);

    int res = 0;

    while (sum >= 0 && pq.empty() == false && pq.top() <= sum)
    {
        sum = sum - pq.top();
        pq.pop();
        res++;
    }
    cout << res;
}

// TC: O(n + log n)

int main() {

    int cost[] = {20, 10, 5, 30, 100};
    int sum = 35;
    purchaseMax(cost, 5, sum);
    // 3

    return 0;
}