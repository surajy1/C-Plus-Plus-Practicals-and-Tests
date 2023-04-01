#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std;

/*
    Find K most frequent number in linear time
    Input 1: arr[] = {10, 5, 20, 5, 10, 10, 30}, k = 2
    Output 1: 10 5

    Input 2: arr[] = {6,7,6,7,6,7,4,4,2,2,5}, k = 3
    Output 2: 6 7 4 or 7 6 4 or 6 7 2 or 7 6 2
*/

void printKFreq(int arr[], int n, int k)
{
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
        m[arr[i]]++;

    vector<int> freq[n + 1];

    for (int i = 0; i < n; i++)
    {
        int f = m[arr[i]];
        if (f != -1)
        {
            freq[f].push_back(arr[i]);
            m[arr[i]] = -1;
        }
    }
    int count = 0;
    for (int i = n; i >= 0; i--)
    {
        for (int x : freq[i])
        {
            cout << x << " ";
            count++;
            if (count == k)
                return;
        }
    }
}

int main() {

    int arr[] = {6, 7, 6, 7, 6, 7, 4, 4, 2, 2, 5};
    int k = 3;

    printKFreq(arr, 11, k);
    // 6 7 4

    return 0;
}