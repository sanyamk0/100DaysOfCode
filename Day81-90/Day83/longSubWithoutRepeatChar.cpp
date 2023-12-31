// 3. Longest Substring Without Repeating Characters - LeetCode
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_map<char, int> mp;
        int maxLength = 0, start = 0;
        for (int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if (mp.find(ch) != mp.end())
            {
                start = max(start, mp[ch] + 1);
            }
            mp[ch] = i;
            maxLength = max(maxLength, i - start + 1);
        }
        return maxLength;
    }
};