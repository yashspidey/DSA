#include <iostream>
#include <climits>
using namespace std;
int main()
{
    // KADANES ALGORITHM  ( remeber to use long long when high constraints )

    // how to remember -
    // 1. sum negative rhega toh reset the sum
    // 2. sum positve rhega toh carry it in next iteration
    // 3. update maxSum everytime

    // there are two CASES in this algorithm -
    // 1. not including empty subarray  ( assume maxSum = INT_MIN )
    // 2. including empty subarray and its sum = 0  ( assume maxSum = 0 )

    // CASE 1.

    int nums[] = {5, 4, -1, 7, 8};
    int n = 5;
    int sum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        sum += nums[i];

        if (sum > maxSum)
        {
            maxSum = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }

    return maxSum;

    // CASE 2.

    // int nums[] = {5, 4, -1, 7, 8};
    // int n = 5;
    // int sum = 0;
    // int maxSum = 0;

    // for (int i = 0; i < n; i++)
    // {

    //     sum += nums[i];

    //     if (sum > maxSum)
    //     {
    //         maxSum = sum;
    //     }
    //     if (sum < 0)
    //     {
    //         sum = 0;
    //     }
    // }

    // return maxSum;

    // ------------------------------------------------------------------

    // VARIATION 2 of this question
    // print the maximum sum subarray

    // int nums[] = {5, 4, -1, 7, 8};
    // int n = 5;
    // int sum = 0;
    // int maxSum = 0;
    // int ansStart = -1;
    // int ansEnd = -1;
    // int start;                     <----- major change here

    // for (int i = 0; i < n; i++)
    // {

    // if (sum == 0)
    // {
    //     start = i;
    // }                     <----- major change here

    //     sum += nums[i];

    //     if (sum > maxSum)
    //     {
    //         maxSum = sum;
    // ansStart = start;
    // ansEnd = i;                     <----- major change here
    //     }
    //     if (sum < 0)
    //     {
    //         sum = 0;
    //     }
    // }

    // return maxSum;
}