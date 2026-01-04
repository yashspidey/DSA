

// Binary Search Algorithm

#include <iostream>
using namespace std;

int BinarySearch(int *arr, int size, int target)
{

    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;

    while (s <= e)
    {
        if (target > arr[mid])
        {
            s = mid + 1;
        }
        else if (target < arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            return mid;
        }

        mid = (s + e) / 2;
    }
}

int main()
{

    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n;
    cin >> n;

    cout << BinarySearch(arr, 9, n);
}