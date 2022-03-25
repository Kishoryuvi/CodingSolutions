class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    pair<int,int>diameterFast(Node* root){
        if(root == NULL){
            pair<int,int> p = make_pair(0,0);
            
            return p;
        }
        
        pair<int,int>left = diameterFast(root->left);
        pair<int,int>right = diameterFast(root->right);
        
        int option1 = left.first;
        int option2 = right.first;
        int option3 = left.second + right.second + 1;
        
        pair<int,int>ans;
        ans.first = max(option1 , max(option2 , option3));;
        ans.second = max(left.second , right.second) + 1;
        
        return ans;
    }
    
    int diameter(Node* root) {
        return diameterFast(root).first;
    }
};
