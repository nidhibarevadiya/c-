#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *Right;

  Node(int data) {
    this->data = data;
    this->left = NULL;
    this->Right = NULL;
  }
};


Node *CreateTree() {
  cout << "Enter value of Node2
  : ";
  int data;
  cin >> data;

  
  if (data == -1) {
    return NULL;
  }

  Node *root = new Node(data);

  cout << "Enter left of node " << root->data << ": ";
  root->left = CreateTree();

  cout << "Enter right of node " << root->data << ": ";
  root->Right = CreateTree();

  return root;
}


void preorder(Node *root) {
  if (root == NULL)
    return;
  cout << root->data << " -> ";
  preorder(root->left);
  preorder(root->Right);
}


void inorder(Node *root) {
  if (root == NULL)
    return;
  inorder(root->left);
  cout << root->data << " -> ";
  inorder(root->Right);
}


void postorder(Node *root) {
  if (root == NULL)
    return;
  postorder(root->left);
  postorder(root->Right);
  cout << root->data << " -> ";
}

int main() {
  Node *root = CreateTree();

  cout << "Pre-order traversal: ";
  preorder(root);
  cout << endl;

  cout << "In-order traversal: ";
  inorder(root);
  cout << endl;

  cout << "Post-order traversal: ";
  postorder(root);
  cout << endl;

  return 0;
}