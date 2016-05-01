/*
Compare two version numbers version1 and version2.
If version1 > version2 return 1, if version1 < version2 return -1, otherwise return 0.

You may assume that the version strings are non-empty and contain only digits and the . character.
The . character does not represent a decimal point and is used to separate number sequences.
For instance, 2.5 is not "two and a half" or "half way to version three", it is the fifth second-level revision of the second first-level revision.

Here is an example of version numbers ordering:

0.1 < 1.1 < 1.2 < 13.37
*/
class Solution {
public:
    int compareVersion(string version1, string version2) {

        string v1 = version1;
        string v2 = version2;

        if(v1.length() == 0 || v2.length() == 0)
            return 0;

        int i=0;
        int j=0;

        int n1;
        int n2;

        while(i<v1.length() || j<v2.length())
        {
            n1 = 0;
            n2 = 0;

            while(i<v1.length() && v1[i] != '.')
            {
                n1 = n1*10+(v1[i]-'0');
                i++;
            }

            while(j<v2.length() && v2[j] != '.')
            {
                n2 = n2*10+(v2[j]-'0');
                j++;
            }

            if(n1>n2)
                return 1;
            else if(n1<n2)
                return -1;

            if(v1[i] == '.')
                i++;
            if(v2[j] == '.')
                j++;
        }

        return 0;
    }
};
