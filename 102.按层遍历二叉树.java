/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> result=new ArrayList<>();
        
        if(root==null) return result;
        
        traversal(root,result,1);
        
        return result;
    }
    
    public void traversal(TreeNode node,List<List<Integer>> result,int level)//level从1开始
    {
        if(node==null) return;
        
        if(result.size()==level-1){
            List<Integer> newList=new ArrayList<>();
            newList.add(node.val);
            result.add(newList);
        }
        else if(result.size()>=level){
            List<Integer> currentList=result.get(level-1);
            currentList.add(node.val);
        }
        
        traversal(node.left,result,level+1);
        traversal(node.right,result,level+1);
    }
    
}
