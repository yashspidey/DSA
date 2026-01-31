#include <iostream>
#include <vector>
using namespace std;

// MERGE SORT ALGORITHM ( SORTING ALGORITHM )

// in this algorithm we use divide and conquer which means divide the problem into
// smaller problems and then solve the smaller problems to get the solution of the
// bigger problem. it is a recursive algorithm. in short what this algo does is divide
// the array into 2 parts and sort them using a function and then add them together.
// repeat this process recursively.

// O(n logn) time complexity for best/average and worst cases

void merge(vector<int> &nums, int st, int mid, int end)
{
    vector<int> temp;
    int i = st;
    int j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (nums[i] < nums[j])
        {
            temp.push_back(nums[i]);
            i++;
        }
        else
        {
            temp.push_back(nums[j]);
            j++;
        }
    }

    while (i <= mid)
    {

        temp.push_back(nums[i]);
        i++;
    }

    while (j <= end)
    {

        temp.push_back(nums[j]);
        j++;
    }

    for (int i = 0; i < temp.size(); i++)
    {
        nums[i + st] = temp[i];
    }
}

void MergeSort(vector<int> &nums, int st, int end)
{

    int mid = st + (end - st) / 2;

    if (st < end)
    {

        // left
        MergeSort(nums, st, mid);
        // right
        MergeSort(nums, mid + 1, end);

        merge(nums, st, mid, end);
    }
}

int main()
{

    int n = 10;
    vector<int> nums = {4, 5, 2, 1, 3, 8, 9, 7, 6, 0};
    int st = 0;
    int end = n - 1;

    MergeSort(nums, st, end);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}