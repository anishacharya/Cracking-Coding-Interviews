struct comparison 
{
public:
    bool operator() (const pair<int,int>& lhs, const pair<int,int>& rhs) const {
        return (lhs.second>rhs.second);
    }
};
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> m;
        /** Find the count of each number in nums */
        for (int i=0; i<nums.size(); ++i) {
            m[nums[i]]++;
        }
        // Running time of the loop: O(n)

        /** heap ordered by count (the count is the second int in the pair):
            the element with the lowest count is at the top */
            priority_queue<pair<int, int>, vector<pair<int, int>>, comparison> pq;

        for (unordered_map<int, int>::iterator it=m.begin(); it!=m.end(); ++it) {

            /** Add the first k elements, then if the top element's count is lower than
                the next iterator element's count, pop the top element and push the
                next iterator element.
                Time: O(log(k)) for each iteration */                
            if (pq.size() < k) {
                pq.push(*it); 
            }
            else if (pq.top().second < it->second) {
                pq.pop();
                pq.push(*it);
            }

        }
        // Running time of the loop: O(d*log(k)) where d is the number of distinct elements in nums

        /** Add the k elements in the heap*/
        vector<int> res;
        for (int i=0; i<k; ++i) {
            res.push_back(pq.top().first);
            pq.pop();
        }
        // Running time of the loop: O(k*log(k))
        return res;

        // Total running time: O(n+d*log(k))
    }
};
