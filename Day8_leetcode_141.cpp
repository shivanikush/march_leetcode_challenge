//using unordered set
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // method 1
 
        unordered_set<ListNode*> bag;
        ListNode* current = head;
        while (current != 0) {
            if (bag.count(current) != 0) {
                return true;
            }
            bag.insert(current);
            current = current->next;
        }
        return false;

    }};

//method 2
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *start = head;
        ListNode * slow = head;
        ListNode *fast = slow;
        while(fast!= NULL && fast->next!= NULL){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
                return true;
        }
        return false;
    }
};
