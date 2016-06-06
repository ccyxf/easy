//没必要删除
//删除操作耗时
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         if(nums.size()==0) return 0;
        
//         int temp=nums[0];
//         vector<int>::iterator it=nums.begin()+1;
        
        
//         while(it!=nums.end()){
//             if(*it==temp)
//                 nums.erase(it);
//             else{
//                 temp=*it;
//                 it++;
//             }
//         }
        
//         return nums.size();
//     }
// };

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        
        if(n<2) return n;
        
        int id=1;
        
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                nums[id]=nums[i];
                id++;
            }
        }
        
        return id;
    }
};
