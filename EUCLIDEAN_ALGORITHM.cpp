#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int GCD(int n1, int n2)
{

    // EUCLEDIAN ALGORITHM

    // jo greater element vo upar jo smaller element vo niche and do mod of both and put the
    // answer in greater element and repeat the process, until one element becomes zero, when a
    //  element becomes zero return the other element.

    while (n1 != 0 && n2 != 0)
    {

        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else
        {
            n2 = n2 % n1;
        }
    }

    if (n1 == 0)
    {
        return n2;
    }
    return n1;

    // Recursive eucledian code  (assuming greater element is n1)

    //     if (n2 == 0)
    // {
    //     return n1;
    // }
    // else
    // {
    //     return GCD(n2, n1 % n2);
    // }
}

int main()
{

    int n1 = 100;
    int n2 = 40;

    cout << GCD(n1, n2);
}