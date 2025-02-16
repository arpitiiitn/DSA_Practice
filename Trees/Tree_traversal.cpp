/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void pre_fun(vector<int> *preorder, TreeNode *temp)
{
    if (temp == NULL)
        return;
    preorder->push_back(temp->data);
    pre_fun(preorder, temp->left);
    pre_fun(preorder, temp->right);
}

void in_fun(vector<int> *inorder, TreeNode *temp)
{
    if (temp == NULL)
        return;
    in_fun(inorder, temp->left);
    inorder->push_back(temp->data);
    in_fun(inorder, temp->right);
}

void post_fun(vector<int> *postorder, TreeNode *temp)
{
    if (temp == NULL)
        return;
    post_fun(postorder, temp->left);
    post_fun(postorder, temp->right);
    postorder->push_back(temp->data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root)
{
    vector<int> inorder;
    vector<int> preorder;
    vector<int> postorder;
    TreeNode *temp = root;
    in_fun(&inorder, temp);
    temp = root;
    pre_fun(&preorder, temp);
    temp = root;
    post_fun(&postorder, temp);

    return {inorder, preorder, postorder};
}