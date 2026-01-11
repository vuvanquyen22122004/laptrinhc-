class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int>c;
        vector<int>l;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                c.push_back(nums[i]);
            }
            else{
                l.push_back(nums[i]);
            }
        }
        vector<int>re;
        int z = c.size();
        for(int i=0;i<z;i++){
            re[2*i]=c[i];
            re[2*i+1]=l[i];
        }
        
           return re;

        
    }
};