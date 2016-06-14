/*
Given a string S and a string T, find the minimum window in S which will contain all the characters in T in complexity O(n).

For example,
S = "ADOBECODEBANC"
T = "ABC"
Minimum window is "BANC".

Note:
If there is no such window in S that covers all characters in T, return the empty string "".

If there are multiple such windows, you are guaranteed that there will always be only one unique minimum window in S.
*/
class Solution {
public:
    string minWindow(string s, string t) 
    {
        unordered_map<char, int> m;
        // Statistic for count of char in t
        for (auto c : t) 
            m[c]++;
        int start = 0, end = 0, counter = t.size(), minStart = 0, minLen = INT_MAX, size = s.size();
        while (end < size)
        {
            // If char in s exists in t, decrease counter
            if (m[s[end]] > 0)
                counter--;
            // Decrease m[s[end]]. If char does not exist in t, m[s[end]] will be negative.
            m[s[end]]--; // check
            end++;
            // When we found a valid window, move start to find smaller window.
            while (counter == 0)
            {
                if (end - start < minLen) 
                {
                    minStart = start;
                    minLen = end - start;
                }
                m[s[start]]++;
                if (m[s[start]] > 0)
                    counter++;
                start++;
            }
            
        }
        if (minLen != INT_MAX)
            return s.substr(minStart, minLen);
        return "";
    }
};
