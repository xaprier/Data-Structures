#include <bits/stdc++.h>

/*
How a linked list works
I have created a linked list in code like as below
          root
            |
            |
        +-----+-----+      +-----+-----+                 +-----+------+
        | 10 | next -----> | 20 | next -----> ... -----> | 100 | NULL |
        +-----+-----+      +-----+-----+                 +-----+------+
*/

// C++ has OOP concepts, so we will use OOP properties
class myNode {
  public:
    int data;
    myNode* next;
};
typedef class myNode node;

int main() {
    // creating the root node with new keyword(memory allocation)
    node* root = new node();
    // assign the 10 value to root node data
    root->data = 10;

    // let's create a 10 node and assign the i*10 value to node->data
    // we will create a iter for travel between nodes and assign the first node
    node* iter = root;
    // i = 1 is root
    for (int i = 2; i <= 10; i++) {
        // memory allocation for node and assign the i*10 value to data
        iter->next = new node();
        iter->next->data = i * 10;

        // iter is going to be next node
        iter = iter->next;
    }

    // let's print all the data if node has been memory allocated
    std::cout << "Printing all the node data" << std::endl;
    iter = root;
    do {
        std::cout << iter->data << " ";
        iter = iter->next;
        if (iter == NULL)
            std::cout << std::endl;
    } while (iter != NULL);

    // let's find the linked list location which have the data = 40
    // reassign the location of root to iter
    iter = root;
    // create a location variable and assigning NULL(can be different for your algorithm)
    int location = NULL;
    // i will use for loop for location
    for (int i = 1; iter != NULL; i++) {
        std::cout << "Searching for the value 40 in location " << i << std::endl;

        if (iter->data == 40) {
            location = i;
            break;
        }

        iter = iter->next;
    }

    if (location != NULL) {
        std::cout << "The value 40 found in " << location << " linked list!" << std::endl;
    } else {
        std::cout << "The value 40 cannot found in linked list!" << std::endl;
    }

    return 0;
}