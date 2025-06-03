/*
Question:
Given the root of a binary tree, return the preorder traversal of its nodes' values.

Approach:
- Preorder traversal visits the root node first, followed by the left subtree, and then the right subtree.
- We can solve this problem recursively by following the preorder traversal order.
- Starting from the root node, we can add the node's value to the result vector, then recursively traverse the left subtree and right subtree.

Complexity Analysis:
- Since we are visiting each node once, the time complexity of this approach is O(N), where N is the number of nodes in the binary tree.
- The space complexity is O(N) as we are using the call stack for recursion.

Code:
*/

#include <bits/stdc++.h>
using namespace std;

struct node {
public:
    int data;
    node *left;
    node *right;

    node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void solve(node* root, vector<int>& ans) {
    if (!root) return;
    ans.push_back(root->data); // Fixed typo from val to data
    solve(root->left, ans);
    solve(root->right, ans);
}

vector<int> preorder(node* root) {
    vector<int> ans;
    solve(root, ans);
    return ans;
}

// Utility to insert nodes in level order
node* insertLevelOrder(vector<int>& arr, int i) {
    if (i >= arr.size()) return nullptr;

    node* root = new node(arr[i]);
    root->left = insertLevelOrder(arr, 2 * i + 1);
    root->right = insertLevelOrder(arr, 2 * i + 2);

    return root;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    node* root = insertLevelOrder(arr, 0);

    vector<int> result = preorder(root);

    cout << "Preorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
