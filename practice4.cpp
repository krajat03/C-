#include <iostream>
using namespace std;
// class Solution {
// public:
int main()
{
    // vector<int> twoSum(vector<int>& nums, int target) {
        int target;
    int nums[5] = {2, 4, 6, 8, 10};
    for (int i = 0; i < 4; i++)
        {
        target = nums[i] + nums[i + 1];
        }
    for (int j = 2; j < 4; j++)
    {
        int x = target + nums[j];
        // cout << target << "\t";
        cout << x << "\t";
    }

    return 0;
}
