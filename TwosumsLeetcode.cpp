class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int f=0;
        int c=0,d=0;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    //cout<<i<<" "<<j<<endl;
                    v.push_back(i);
                    v.push_back(j);
                    f=1;
                    break;
                    
                }
            }
            if(f==1)
                break;
        }
        return v;
    }
};
