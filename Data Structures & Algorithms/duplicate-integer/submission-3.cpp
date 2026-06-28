 class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> seen;
        int size = nums.size();

        for (int i = 0; i < size ; i++){
            if (seen.count(nums[i]))
                return true;
            seen.insert(nums[i]);    
        }
        return false;
    }
}; 
/*
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int size = nums.size();

        for (int i = 0; i < size; i++) {
            for (int j = i + 1; j < size; j++) {
                if (nums[i] == nums[j])
                    return true;
            }
        }

        return false;
    }
}; */
