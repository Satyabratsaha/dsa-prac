#include<stdio.h>
#include<stdlib.h>
#include <time.h>
// Implementing a Tree
typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;
Node *create_node(int n) {
    Node *root = malloc(sizeof(Node));
    if (root != NULL) {
        root->data = n;
        root->left = NULL;
        root->right = NULL;
    }
    return root;
}

void print_tree(Node *root) {
    if (root == NULL) {
        printf("---empty---\n");
        return;
    }
    printf("%d\n", root->data);
    print_tree(root->left);
    print_tree(root->right);
}

int main() {
    Node *n1 = create_node(11);
    Node *n2 = create_node(12);
    Node *n3 = create_node(13);
    Node *n4 = create_node(14);
    Node *n5 = create_node(15);
    Node *n6 = create_node(16);
    Node *n7 = create_node(17);

    n1->left = n2;
    n1->right = n3;
    n2->left = n4;
    n2->right = n5;
    n3->left = n6;
    n3->right = n7;

    print_tree(n1);

    free(n1);
    free(n2);
    free(n3);
    free(n4);
    free(n5);
    free(n6);
    free(n7);
}
