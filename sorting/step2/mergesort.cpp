#include <iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high, int temp[])
{
    int i = low, j = mid + 1, k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }

    for (i = low; i <= high; i++)
    {
        arr[i] = temp[i];
    }
}

void mergesort(int arr[], int low, int high, int temp[])
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergesort(arr, low, mid, temp);
    mergesort(arr, mid + 1, high, temp);
    merge(arr, low, mid, high, temp);
}

int main()
{
    int arr[] = {5, 3, 8, 4, 2, 7, 9};
    int n = 7;
    int temp[n];

    mergesort(arr, 0, n - 1, temp);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
