#include <stdio.h>
// for malloc(memory allocation)
#include <stdlib.h>

typedef struct myNode {
    int data;
    struct myNode* next;
} node;

int main() {
    // creating the root node
    node* root = NULL;
    // memory allocation for root, and assign the value to data
    root = (struct node*)malloc(sizeof(struct myNode));
    root->data = 10;

    // let's create a 10 node and assign the i*10 value to node->data
    // we will create a iter for travel between nodes and assign the first node
    node* iter = root;
    // i = 1 is root
    for (int i = 2; i <= 10; i++) {
        // memory allocation for node and assign the i*10 value to data
        iter->next = (struct node*)malloc(sizeof(struct myNode));
        iter->next->data = i * 10;

        // iter is going to be next node
        iter = iter->next;
    }

    // let's print all the data if node has been memory allocated
    printf("Printing all the node data\n");
    iter = root;
    do {
        printf("%d ", iter->data);
        iter = iter->next;
        if (iter == NULL)
            printf("\n");
    } while (iter != NULL);

    // let's find the linked list location which have the data = 40
    // reassign the value of root to iter
    iter = root;
    // create a location variable and assigning NULL(can be different for your algorithm)
    int location = NULL;
    // i will use for loop for location
    for (int i = 1; iter != NULL; i++) {
        printf("Searching for the value 40 in location %d\n", i);
        if (iter->data == 40) {
            location = i;
            break;
        }
        iter = iter->next;
    }
    if (location != NULL) {
        printf("The value 40 found in %d linked list!\n", location);
    } else {
        printf("The value 40 cannot found in linked list!\n");
    }

    return 0;
}