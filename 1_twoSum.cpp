//使用unordered_map
//beats 55.48%

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //vector<int> result;
        unordered_map<int,int> hash_map;
        
        for(int i=0;i<nums.size();i++){
            int temp=target-nums[i];
            if(hash_map.find(temp)!=hash_map.end()){
                //result.push_back(hash_map[temp]);
                //result.push_back(i);
                return {hash_map[temp],i};
            }
            hash_map[nums[i]]=i;
        }
        //return result;
        return {};
    };
};
