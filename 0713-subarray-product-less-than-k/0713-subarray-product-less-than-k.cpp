class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {
      
        // code here
        if (k <= 1) return 0;
        int i=0,j=0;
        long long prod=1;
        int count=0;
        while(j<arr.size()){
            prod=prod*arr[j];
            while(prod>=k){
                prod=prod/arr[i];
                i++;
            }
            count+=j-i+1;
            j++;
        }
        return count;
    
    }
};