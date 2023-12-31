#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans , min = INT_MAX , n = nums.size();
        for(int i = 0; i < n - 2; ++i){
               int l = i + 1, r = n - 1;
               while(l < r)
               {
                   int sum =nums[i]+nums[l]+nums[r];
                   if(abs(sum-target)<min){
                      min=abs(sum-target);
                      ans=sum;
                   }
                   if(sum<target) l++;
                   else if(sum>target)r--;
                   else return sum;
               }
        }
        return ans;
    }
};


int main()
{
    Solution sol;
    vector<int> nums = {-1,2,1,-4};
    int target = 1; 
    cout<<sol.threeSumClosest(nums,target);
        return 0;
}