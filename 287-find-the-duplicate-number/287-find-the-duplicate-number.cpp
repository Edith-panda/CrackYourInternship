class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        int ans =0;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto it: m){
            if(it.second > 1){
               ans = it.first;
            }
        }
        return ans;
    }
};