/*Given a string s and a dictionary of words dict, determine if s can be segmented into a space-separated sequence of one or more dictionary words. 

For example, given 
s = "leetcode", 
dict = ["leet", "code"]. 

Return true because "leetcode" can be segmented as "leet code" */
public class WordSegment
    {
        public static HashSet<string> dict;
        public static bool TryToSegment(string s)
        {
            if (dict.Contains(s))
                return true;
            
            int end = 1;

            while (end <= s.Length)
            {
                if (dict.Contains(s.Substring(0, end)))
                {
                    bool success = true;
                    if (end < s.Length)
                    {
                        success = TryToSegment(s.Substring(end));
                    }

                    if (success)
                        return true;
                }                                
                end++;
            }
            return false;
        }
    }
