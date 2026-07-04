class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
        }
        vector<pair<int, int>> freqPairs;
        for(auto m : map) {
            freqPairs.push_back({m.second, m.first});
        }
        sort(freqPairs.rbegin(), freqPairs.rend());
        for(int i = 0; i < k; i++) {
            ans.push_back(freqPairs[i].second);
        }
        return ans;
    }
};