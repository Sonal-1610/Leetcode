class Solution {
public:
    int subtractProductAndSum(int n) {
        int ori=n;
        long sum=0,pro=1;
        while(ori!=0){
            int rem=ori%10;
            sum=sum+rem;
            pro=pro*rem;
            ori=ori/10;
        }
        return pro-sum;
    }
};