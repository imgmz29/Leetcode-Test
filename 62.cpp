class Solution {
public:
    int uniquePaths(int m, int n) {
        if (m == 1 || n == 1){
            return 1;
        }
        // useit->right->m, n-1
        // loseit->left->m-1, n
        // useit and loseit are all correct, so add them instead of choosing one of them
        else{
            return uniquePaths(m - 1, n) + uniquePaths(m, n - 1);
        }        
    }
};
