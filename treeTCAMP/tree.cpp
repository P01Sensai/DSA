#include <iostream>
#include <bits/stdc++.h>
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

void traversePreOrder(TreeNode* temp, vector<int>& result) {
    if (temp != nullptr) {
        cout<< "  " << temp->data;
        result.push_back(temp->data);
        traversePreOrder(temp->left, result);
        traversePreOrder(temp->right, result);
    }
}


int main() {
    //TreeNode* root = createNode(1);
    auto root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    root->right->left->right = createNode(8);

    

    vector<int> tData;
    traversePreOrder(root, tData);

    sort(tData.begin(), tData.end());
    cout << endl;
    cout << "Sorted traversal: ";
    for (auto value : tData) {
        cout << value << " ";
    }
    cout << endl;
    
   
    
    return 0;
}
