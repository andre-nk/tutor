//binary search
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> &v, int key)
{
    int low = 0;
    int high = v.size() - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (v[mid] == key)
            return mid;
        else if (v[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}