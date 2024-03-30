// 30.03.2024 gfg potd solution
// Function to find the minimum element in the given BST.

class Solution {
public:   
    int minValue(Node* root) {
        // Code here
        if(!root) return -1;
        
        while(root->left != NULL){
            root=root->left;
        }
        
        return root->data;
    }
};
