//双指针
// class Solution {
// public:
//     int removeElement(vector<int>& nums, int val) {
//         if(nums.size()==0) return 0;
        
//         int a=0,b=nums.size()-1;
        
//         while(a<b){
//             if(nums[a]==val){
//                 nums[a]=nums[b];
//                 b--;
//             }
//             else a++;
//         }
        
//         if(a==b&&nums[a]!=val) return a+1;
//         return a;
//     }
// };
//覆盖
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0) return 0;
        
        int id=0;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[id]=nums[i];
                id++;
            }
        }
        return id;
    }
};
