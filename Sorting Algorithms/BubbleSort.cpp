#include <iostream>
using namespace std;

// BUBBLE SORT ALGORITHM ( SORTING ALGORITHM )

// swap adjacent elements and push the greatest to the right 
// until n - 1 iterations.

void BubbleSort(int nums[], int n) // O(n^2) time complexity
{

    for (int i = 0; i < n - 1; i++)
    {
        // optimization = use a boolean to
        // check if the array is already sorted and return.

        bool isSwap = false;

        for (int j = 0; j < n - 1 - i; j++)
        {

            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
                isSwap = true;
            }
        }

        if (!isSwap)
        {
            return;
        }
    }
}

int main()
{

    int n = 10;
    int nums[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 0};

    BubbleSort(nums, n);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
}