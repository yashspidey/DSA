#include <iostream>
using namespace std;

// INSERTION SORT ALGORITHM ( SORTING ALGORITHM )

// divide array in two parts, sorted and unsorted, assume index 1 as sorted and run a loop
// from index 1 to n - 1 and assume it as the unsorted part, assume first element of unsorted
// part as curr and assume i - 1 as the prev, then pick the curr and fit it into the sorted
// part, repeat the process untill the whole array is sorted.

void InsertionSort(int nums[], int n) // O(n^2) time complexity
{

    for (int i = 1; i < n; i++)
    {

        int curr = nums[i];
        int prev = i - 1;

        while (prev >= 0 && nums[prev] > curr) // this algo does not use swap, rather it uses read and write.
        {
            nums[prev + 1] = nums[prev];
            prev--;
        }

        nums[prev + 1] = curr;
    }
}

int main()
{

    int n = 5;
    int nums[] = {4, 5, 2, 1, 3};

    InsertionSort(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}