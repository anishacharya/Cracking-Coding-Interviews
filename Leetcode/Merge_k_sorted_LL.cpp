/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int length = lists.size();
        ListNode* cur = new ListNode(0);
        ListNode* hhead = cur;
        priority_queue<ListNode*, vector<ListNode*>, compare> pq;

        for(int i=0; i<length; i++){
            if(lists[i] != NULL) pq.push(lists[i]);
        }

        while(!pq.empty()){
            cur->next = pq.top();
            pq.pop();
            cur = cur->next;
            if(cur->next!= NULL){
                pq.push(cur->next);
            }
        }
        return hhead->next;
    }
private:
    struct compare {
        bool operator ()(const ListNode *l1, const ListNode *l2) {
            return l1->val > l2->val;
        }
    };
};
