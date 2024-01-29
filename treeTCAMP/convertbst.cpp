#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* createNode(int value) {
    TreeNode* newNode = new TreeNode;
    
    newNode->data = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

void inOrderTraversal(TreeNode* root, vector<int>& values) {
    if (root != nullptr) {
        inOrderTraversal(root->left, values);
        values.push_back(root->data);
        inOrderTraversal(root->right, values);
    }
}

void replaceWithSortedValues(TreeNode* root, vector<int>& sortedValues, size_t& index) {
    if (root != nullptr) {
        replaceWithSortedValues(root->left, sortedValues, index);
        root->data = sortedValues[index++];
        replaceWithSortedValues(root->right, sortedValues, index);
    }
}

void convertToBST(TreeNode* root) {
    vector<int> values;
    inOrderTraversal(root, values);

    sort(values.begin(), values.end());

    size_t index = 0;
    replaceWithSortedValues(root, values, index);
}



int main() {
    vector<int> values;
    
    auto root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    root->right->left->right = createNode(8);


    cout << "Original Inorder traversal: ";
    inOrderTraversal(root, values);
    for (int value : values) {
        cout << value << " ";
    }
    
    cout << endl;

    
    convertToBST(root);
    values.clear();

    cout << "BST Inorder traversal: ";
    inOrderTraversal(root, values);
    for (int value : values) {
        cout << value << " ";
    }
    cout << endl;

    // Remember to free dynamically allocated memory
    // This is a simplified version; in practice, use smart pointers for better memory management
    // delete root->left->left;
    // delete root->left->right;
    // delete root->left;
    // delete root->right;
    // delete root;

    return 0;
}
