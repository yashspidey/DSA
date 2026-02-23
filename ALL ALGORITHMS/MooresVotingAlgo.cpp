#include <iostream>
using namespace std;
int main()
{

    // steps -
    // 1. Apply Moore Voting Algorithm
    // 2. verify the answer if it is the majority element or not.

    // There are two cases in this algorithm ( both have 
    // same codes except the first one has an extra check )
    // 1. the majority element may or may not exist.
    // 2. the majority element exists is confirmed.

    // CASE 1.

    int nums[] = {1, 1, 2, 1, 3, 5, 1};
    int n = 7;
    int count = 0;
    int el;

    for (int i = 0; i < n; i++)
    {

        if (count == 0)
        {
            el = nums[i];
            count = 1;
        }
        else if (el == nums[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    int count1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (el == nums[i])
        {
            count1++;
        }
    }
    if (count1 > n / 2)
    {
        return el;
    }

    return -1;

    // CASE 2.

    // int nums[] = {1, 1, 2, 1, 3, 5, 1};
    //    int n = 7;
    // int count = 0;
    // int el;

    // for (int i = 0; i < n; i++) {

    //     if (count == 0) {
    //         el = nums[i];
    //         count = 1;
    //     } else if (el == nums[i]) {
    //         count++;
    //     } else {
    //         count--;
    //     }
    // }

    // return el;
}