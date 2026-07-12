class Solution {
public:
     int fun(vector<int> &arr, int k){
        unordered_map<int,int> mp;
        int count=0;
        int i=0,j=0;
        while(j<arr.size()){
            mp[arr[j]]++;
            if(mp.size()<=k){
                count=count+(j-i+1);
                
            }
            else{
                while(mp.size()>k){
                    mp[arr[i]]--;
                    if(mp[arr[i]]==0){
                        mp.erase(arr[i]);
                    }
                    i++;
                    
                }
                count = count + (j - i + 1);
            }
            j++;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
         int atmostk=fun(nums, k);
        int atmostk_1=fun(nums, k-1);
        int ans= atmostk-atmostk_1;
        return ans;
    }
};