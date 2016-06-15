class Solution {
public:
    int minDistance(string word1, string word2) {
        if(word1.empty()||word2.empty()) return word1.size()+word2.size();
        int dp[word1.size()][word2.size()]={0};
        for(int i=0;i<word1.size();i++) for(int j=0;j<word2.size();j++){
            if(word1[i]==word2[j]) dp[i][j] = i&&j?dp[i-1][j-1]:i+j;
            else dp[i][j] = min((i&&j?dp[i-1][j-1]:i+j),min((i?dp[i-1][j]:j),(j?dp[i][j-1]:i)))+1;
        }
        return dp[word1.size()-1][word2.size()-1];
    }
};
