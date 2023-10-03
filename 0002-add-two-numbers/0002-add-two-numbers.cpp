/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        std::ios_base::sync_with_stdio();
        cin.tie(NULL); cout.tie(NULL);
        ListNode *ans=new ListNode();
        ListNode *fl=ans;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int temp=0;
            if(l1!=NULL){ temp+=l1->val; l1=l1->next;}
            if(l2!=NULL){ temp+=l2->val; l2=l2->next;}
            temp+=carry;
            carry=temp/10;
            temp%=10;
            ListNode* tem=new ListNode(temp);
            fl->next=tem;
            fl=fl->next;
        }
        return ans->next;
    }
};