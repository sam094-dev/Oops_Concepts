#include <bits/stdc++.h>
using namespace std;
void heapify(vector<int> &arr, int n, int idx)
{
    int largest = idx;
    int left = idx * 2;
    int right = idx * 2 + 1;
    if (left <= n && arr[largest] < arr[left])
        largest = left;
    if (right <= n && arr[largest] < arr[right])
        largest = right;
    if (largest != idx)
    {
        swap(arr[largest], arr[idx]);
        heapify(arr, n, largest);
    }
}
void deleteNode(vector<int> &arr, int n)
{
    swap(arr[1], arr[n]);
    n = n - 1;
    heapify(arr, n, 1);
}
void insertNode(vector<int> &arr, int n, int ele)
{
    arr.push_back(ele);
    n = n + 1;
    int idx = n;
    while (idx > 1)
    {
        if (arr[idx / 2] < arr[idx])
            swap(arr[idx / 2], arr[idx]);
        else
            break;
        idx = idx / 2;
    }
}

int main()
{
    vector<int> arr = {0, 10, 5, 3, 2, 4};
    int n = arr.size() - 1;
    // deleteNode(arr, n);
    insertNode(arr, n, 15);
    for (int i = 0; i <= n + 1; i++)
    {
        cout << arr[i] << endl;
    }
}