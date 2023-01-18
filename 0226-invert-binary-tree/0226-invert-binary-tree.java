class Solution {
    public TreeNode invertBTree(TreeNode root) {

        if(root == null) {
            return null;
        }

     TreeNode temp=root.right;
        root.right=root.left;
        root.left=temp;
        
        invertBTree(root.right);
        invertBTree(root.left);
        return root;
    }
        public TreeNode invertTree(TreeNode root) {
       return invertBTree(root);
        }
};