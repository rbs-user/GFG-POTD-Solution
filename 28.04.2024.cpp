// 28.04.2024 gfg potd solution
class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        // Your Code Here
        Node* fast=head, *slow=head, *prev=NULL;
        while(fast && fast->next){
            fast=fast->next->next;
            prev=slow;
            slow=slow->next;
        }
        
        // Check if prev is not NULL before accessing prev->next
        if(prev != NULL) {
            prev->next=slow->next;
        } else {
            // If prev is NULL, it means there is only one node in the list,
            // so we simply return NULL to indicate an empty list.
            return NULL;
        }
        return head;
    }
};

