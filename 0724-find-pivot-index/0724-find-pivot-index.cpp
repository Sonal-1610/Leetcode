class Solution {
public:
    int pivotIndex(vector<int>& arr) {
         int sum=0;
         for(int i=0;i<arr.size();i++){
             sum+=arr[i];
             
         }
         int left=0;
         
          for(int i=0;i<arr.size();i++){
            int right=sum-left-arr[i];
             if(right==left){
                 return i;
             }
              left=left+arr[i];
             
         }
         
         return -1;
    }
};