class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<long long int,long long int> mp;
        for(long long int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        long long int n=1,k=0;
        for(auto x:mp)
        {
            if(n<=x.second)
            {
                k=x.first;
                n=x.second;
            }
        }
        return k;
        
    }
};
