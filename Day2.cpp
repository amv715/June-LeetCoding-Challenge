/*
    Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.
    Input: head = [4,5,1,9], node = 5
    Output: [4,1,9]
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        //create a temporary pointer pointing to the next node
        ListNode* temp = node->next;
        
        //replace the data of the given node by the data in next node
        node->val = temp->val;
        
        //point the given node to the node immediately after next node
        node->next = temp->next;
        
        //free the memory of the next node
        delete(temp);
    }
};
