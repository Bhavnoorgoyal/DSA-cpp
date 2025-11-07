#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = nullptr;
    return newNode;
}
Node* insert(Node* root, int value) {
    if (root == nullptr)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);

    return root;
}
void inorder(Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node* root) {
    if (root == nullptr) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root) {
    if (root == nullptr) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
Node* searchRecursive(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;

    if (key < root->data)
        return searchRecursive(root->left, key);
    else
        return searchRecursive(root->right, key);
}
Node* searchNonRecursive(Node* root, int key) {
    while (root != nullptr && root->data != key) {
        if (key < root->data)
            root = root->left;
        else
            root = root->right;
    }
    return root;
}
Node* findMin(Node* root) {
    while (root && root->left != nullptr)
        root = root->left;
    return root;
}
Node* findMax(Node* root) {
    while (root && root->right != nullptr)
        root = root->right;
    return root;
}
Node* inorderSuccessor(Node* root, Node* n) {
    if (n->right != nullptr)
        return findMin(n->right);

    Node* successor = nullptr;
    while (root != nullptr) {
        if (n->data < root->data) {
            successor = root;
            root = root->left;
        }
        else if (n->data > root->data)
            root = root->right;
        else
            break;
    }
    return successor;
}
Node* inorderPredecessor(Node* root, Node* n) {
    if (n->left != nullptr)
        return findMax(n->left);

    Node* predecessor = nullptr;
    while (root != nullptr) {
        if (n->data > root->data) {
            predecessor = root;
            root = root->right;
        }
        else if (n->data < root->data)
            root = root->left;
        else
            break;
    }
    return predecessor;
}

int main() {
    Node* root = nullptr;
    int values[] = {1, 2, 3, 4, 5, 6, 7};

    for (int val : values)
        root = insert(root, val);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << "\nPreorder Traversal: ";
    preorder(root);
    cout << "\nPostorder Traversal: ";
    postorder(root);
    cout << endl;

    int key = 4;
    Node* found = searchRecursive(root, key);
    cout << "\nSearch Recursive: " << (found ? "Found" : "Not Found");
    found = searchNonRecursive(root, key);
    cout << "\nSearch Non-Recursive: " << (found ? "Found" : "Not Found");
    cout << "\nMinimum element: " << findMin(root)->data;
    cout << "\nMaximum element: " << findMax(root)->data;
    Node* n = searchRecursive(root, 60);
    Node* succ = inorderSuccessor(root, n);
    Node* pred = inorderPredecessor(root, n);
    cout << "\nInorder Successor of 4: " << (succ ? to_string(succ->data) : "None");
    cout << "\nInorder Predecessor of 4: " << (pred ? to_string(pred->data) : "None");
    cout << endl;

    return 0;
}
