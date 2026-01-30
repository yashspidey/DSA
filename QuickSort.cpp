#include <iostream>
#include <vector>
using namespace std;

// QUICK SORT ALGORITHM ( SORTING ALGORITHM )

// step 1 - pick the pivot

// step 2 - keep the lesser elements than pivot to the left
// of pivot, similarly keep the greater elements than pivot
// to the right. ( elements should not necessarily be sorted )

// step 3 - recursively call quick sort for the left hald and
// the right half

// O(n logn) time complexity for average/ practical cases
// O(n^2) time complexity for worst case

// O(1) space complexity if u ignore recursion call stack ( better than merger sort because 
// we use extra space there while the time complexity of both algos are same, therefore we 
// use quicksort over mergesort)

int partition(vector<int> &nums, int st, int end) 
{
    int idx = st - 1;
    int pivot = nums[end];

    for (int j = st; j < end; j++)
    {

        if (nums[j] <= pivot)
        {
            idx++;
            swap(nums[j], nums[idx]);
        }
    }

    idx++;
    swap(nums[end], nums[idx]);
    return idx;
}

void QuickSort(vector<int> &nums, int st, int end) 
{

    if (st < end)
    {
        int pivotIdx = partition(nums, st, end);

        // sort left half
        QuickSort(nums, st, pivotIdx - 1);
        // sort right half
        QuickSort(nums, pivotIdx + 1, end);
    }
}

int main()
{

    int n = 10;
    int st = 0;
    int end = n - 1;
    vector<int> nums = {4, 5, 2, 1, 3, 6, 8, 0, 7, 9};

    QuickSort(nums, st, end);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}