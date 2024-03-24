class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int present = 0;
        for(int i =0;i<nums.size();i++){
            present += nums[i];
            if( ans < present) ans = present;
            if(present < 0) present = 0;
        }
        return ans;
    }
};

#pragma GCC optimize("Ofast")
static auto _ = [](){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::cout.tie(nullptr);
    return nullptr;
}();