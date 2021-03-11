class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int f=0;
        for(auto x:mp){
            if(x.second>1)
            {
                f=1;break;
            }
        }
        if(f==1)
            return true;
        else
            return false;
        
    }
};
