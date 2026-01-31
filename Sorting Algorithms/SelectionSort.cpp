#include <iostream>
using namespace std;

// SELECTION SORT ALGORITHM ( SORTING ALGORITHM )

// assume a sorted and unsorted part, find the least element from the
// unsorted part and put it in the sorted parts last index.

void SelectionSort(int nums[], int n) // O(n^2) time complexity
{

    for (int i = 0; i < n - 1; i++)
    {

        // "smallestIdx" ye unsorted part ka starting index assume krenge

        int smallestIdx = i;

        for (int j = i + 1; j < n; j++)
        {

            // 4,5,2,1,3
            if (nums[j] < nums[smallestIdx])
            {
                smallestIdx = j;
            }
        }

        swap(nums[i], nums[smallestIdx]);
    }
}

int main()
{

    int n = 10;
    int nums[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};

    SelectionSort(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}