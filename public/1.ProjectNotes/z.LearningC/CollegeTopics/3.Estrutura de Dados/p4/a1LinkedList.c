// ChatGPT Note:

#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in a linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to print elements of a linked list
void printLinkedList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Creating a sequential (array-based) list
    int sequentialList[5] = {1, 3, 5, 7, 9};
    printf("Sequential list: ");
    for (int i = 0; i < 5; i++) {
        printf("%d -> ", sequentialList[i]);
    }
    printf("NULL\n\n");

    // Creating a linked list
    struct Node* head = createNode(1);
    head->next = createNode(3);
    head->next->next = createNode(5);
    head->next->next->next = createNode(7);
    head->next->next->next->next = createNode(9);

    printf("Linked list: ");
    printLinkedList(head);

    // Freeing memory allocated for the linked list
    struct Node* current = head;
    struct Node* next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
