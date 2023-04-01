#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

/*
    Find K most frequent elements
    Input 1: arr[] = {10, 5, 20, 5, 10, 10, 30}, k = 2
    Output 1: 10 5

    Input 2: arr[] = {20, 40, 30, 20, 30, 40, 60, 60}, k = 3
    Output 2: 20 30 40
*/

struct MyCmp {
    bool operator()(pair <int, int> p1, pair<int, int>p2)
    {
        if (p1.second == p2.second)
            return p1.first > p2.first;
        return p1.second < p2.second;
    }
};

void printKMostFreq(int arr[], int n, int k)
{
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    priority_queue<pair<int, int>, vector<pair<int, int>>, MyCmp > pq(m.begin(), m.end());

    for (int i = 0; i < k; i++)
    {
        cout << pq.top().first << " ";
        pq.pop();
    }
}

// TC: O(k log n)

int main() {

    int arr[] = {20, 40, 30, 20, 30, 40, 60, 60};
    int k = 3;

    printKMostFreq(arr, 8, k);
    // 20 30 40

    return 0;
}
