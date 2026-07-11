class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;
        int i = 0, j = 0, count = 0, ans = 0;
        while (j < fruits.size()) {
            mp[fruits[j]]++;
            count++;
            while (mp.size() > 2) {
                mp[fruits[i]]--;
                count--;
                if (mp[fruits[i]] == 0) {
                    mp.erase(fruits[i]);
                }
                i++;
            }
            ans = max(ans, count);
            j++;
        }
        return ans;
    }
};