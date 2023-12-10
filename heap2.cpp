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
int main()
{
    vector<int> arr = {0, 3, 2, 7, 4, 1};
    int n = arr.size() - 1;
    int k = n;
    for (int i = 1; i <= n; i++)
    {
        heapify(arr, n, i);
    }
    for (int i = k; i >= 1; i--)
    {
        swap(arr[1], arr[i]);
        cout << arr[i] << " ";
        n = n - 1;
        heapify(arr, n, 1);
    }
    cout << endl;
    for (int i = 1; i <= k; i++)
    {
        cout << arr[i];
    }
}