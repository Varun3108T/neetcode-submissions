class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<vector<int>> freq(nums.size()+1);
        for(int x : nums){
            count[x]++;
        }
        for(const auto& x : count){
            freq[x.second].push_back(x.first);
        }
        vector<int> res;
        for(int i = freq.size()-1;i>0;i--){
            for(int x : freq[i]){
                res.push_back(x);
                if(res.size() == k){
                    return res;
                }
            }
        }
        return res;
    }
};
