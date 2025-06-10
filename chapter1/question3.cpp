#include<iostream>
#include<numeric>
#include<vector>

using namespace std;

int get_lcm(vector<int>& nums)
{
    int ans = lcm(nums[0], nums[1]);
    
    for(int i = 2; i < nums.size()-1; i++)
    {
        ans = lcm(ans, nums[i]);
    }
    ans = lcm(ans, nums[nums.size()-1]);
    return ans;
}

int main()
{
    vector<int> nums;
    
    int test_num, input, ans = 0;
    cin >> test_num;
    
    while(test_num--)
    {
        cin >> input;
        nums.push_back(input);
    }
    
    if(!nums.empty())
        ans = get_lcm(nums);
    
    cout << ans;
    
}
