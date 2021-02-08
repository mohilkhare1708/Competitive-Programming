/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// root: head node
Node *removeDuplicates(Node *root) {
  Node *curr = root->next;
  Node *prev = root;
  while(curr != NULL) {
      if(prev->data == curr->data) {
          prev->next = curr->next;
          curr = prev->next;
      }
      else {
          prev = curr;
          curr = curr->next;
      }
  }
  return root;
}