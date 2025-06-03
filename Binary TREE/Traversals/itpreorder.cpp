/*
Question:
Given the root of a binary tree, return the preorder traversal of its nodes' values.

Approach:
- We can perform a preorder traversal iteratively using a stack.
- We start by pushing the root node into the stack.
- Then, while the stack is not empty, we pop a node from the stack, add its value to the result vector, and push its right child (if it exists) followed by its left child (if it exists) into the stack.
- By pushing the right child before the left child, we ensure that the left child is processed first during the traversal.

Complexity Analysis:
- Since we visit each node once and perform constant time operations for each node, the time complexity of this approach is O(N), where N is the number of nodes in the binary tree.
- The space complexity is O(N) as we store the node values in the result vector.

Code:
*/
#include<bits/stdc++.h>
using namespace std;

vector<int> preorder(node* root){
    if(!root) return {};

    stack<root*>st;
    st.push(root);
    vector<int>ans;
    while(!st){
        node* curr=st.top;
        st.pop();
        ans.push_back(curr->data);
        if(curr->right){
            st.push(arr->right);
        }
        if(curr->left){
            st.push(arr->left);
        }
    }
    return ans;
}