
class TreeNode {

public:
	TreeNode(const string& s,TreeNode *lc = NULLPTR ,TreeNode *rc = NULLPTR)
	       :value(s) , count(1) ,left(lc) , right(rc) {}

	TreeNode(TreeNode &cp)
	:value(cp.value) , count(cp.count) , left(cp.left) , right(cp.right) 
 		 





private:
		string 		value;
		int 		count;
		TreeNode	*left;
	       	TreeNode	*right;
};	
