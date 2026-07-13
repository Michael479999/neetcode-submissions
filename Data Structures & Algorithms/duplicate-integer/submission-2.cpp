class Solution
{
public:
    bool hasDuplicate(vector<int>& nums)
    {
        unordered_set<int> seen;

        for (int num : nums)
        {
            if (seen.count(num)) {
                return true;  // Duplicate found
            }
            seen.insert(num);  // First time seeing this number
        }

        return false;  // No duplicates
    }
};