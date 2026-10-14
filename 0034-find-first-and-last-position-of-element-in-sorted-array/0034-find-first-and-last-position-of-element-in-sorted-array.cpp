class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
                int f=-1,l=-1;
        int left=0,right=arr.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]==x){
                f=mid;
                right=mid-1;
                
            }
            else if(arr[mid]<x){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        
        left=0;right=arr.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]==x){
                if(mid>l)
                l=mid;
                
                left=mid+1;
                
            }
            else if(arr[mid]<x){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return {f,l};
    }
};