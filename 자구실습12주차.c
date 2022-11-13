#include <stdio.h>
#define MAX_SIZE 100

struct treeNode {
	int data;
	struct treeNode* left;
	struct treeNode* right;
};

int* Arr(int size) {
	int* arr;
	arr = (int*)malloc(size * sizeof(int));
	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
	}
	return arr;
}

typedef struct treeNode* treePointer;

int top = -1;
struct treeNode* stack[MAX_SIZE];

void push(treePointer tree_node) {
	stack[++top] = tree_node;
}

treePointer pop() {
	return stack[top--];
}

void insert(treePointer *root, int data) {
	struct treeNode* tree_node = (struct treeNode*)malloc(sizeof(struct treeNode));//메모리 할당
	tree_node->data = data;
	tree_node->left = NULL;
	tree_node->right = NULL;
	if ((*root) == NULL) { 
		(*root) = tree_node;
	}
	else if ((*root)->data < data) {
		insert(&(*root)->right, data);
	}
	else if ((*root)->data > data) {
		insert(&(*root)->left, data);
	}
}

void printArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void shuffle(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		int index = rand() % size;
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;
	}
}
void iterinorder(treePointer *tree_node) {
	printf("addr: %u \n", *tree_node);
	while (1) {
		while (*tree_node) {
			push(*tree_node);
			*tree_node = (*tree_node)->left;
		}
		
		*tree_node = pop();
		if (!(*tree_node))break;

		printf("%d ", (*tree_node)->data);
		(*tree_node) = (*tree_node)->right;
	}
	
}
void main() {
	srand(9999);
	treePointer t1 = NULL;

	const int N = 5;
	int* arr = Arr(N);
	shuffle(arr, N);
	printArr(arr, N);
	for (int i = 0; i < N; i++) {
		insert(&t1, arr[i]);
	}
	printf("t1 address: %u \n", t1);
	iterinorder(&t1);
}