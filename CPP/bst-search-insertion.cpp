// C++ Code to insert node and to print inorder traversal
// using iteration
#include <bits/stdc++.h>
using namespace std;

// BST Node
class Node {
public:
	int val;
	Node* left;
	Node* right;
	Node(int val)
		: val(val)
		, left(NULL)
		, right(NULL)
	{
	}
};

// Utility function to insert node in BST
void insert(Node*& root, int key)
{
	Node* node = new Node(key);
	if (!root) {
		root = node;
		return;
	}
	Node* prev = NULL;
	Node* temp = root;
	while (temp) {
		if (temp->val > key) {
			prev = temp;
			temp = temp->left;
		}
		else if (temp->val < key) {
			prev = temp;
			temp = temp->right;
		}
	}
	if (prev->val > key)
		prev->left = node;
	else
		prev->right = node;
}

// Utiltiy function to print inorder traversal
void inorder(Node* root)
{
	Node* temp = root;
	stack<Node*> st;
	while (temp != NULL || !st.empty()) {
		if (temp != NULL) {
			st.push(temp);
			temp = temp->left;
		}
		else {
			temp = st.top();
			st.pop();
			cout << temp->val << " ";
			temp = temp->right;
		}
	}
}

// Driver code
int main()
{
	Node* root = NULL;
	insert(root, 30);
	insert(root, 50);
	insert(root, 15);
	insert(root, 20);
	insert(root, 10);
	insert(root, 40);
	insert(root, 60);

	inorder(root);

	return 0;
}

// This code is contributed by Tapesh(tapeshdua420)
