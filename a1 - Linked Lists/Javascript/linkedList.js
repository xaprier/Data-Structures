// overwrite the console.log function without new line
console.log = function (d) {
    process.stdout.write(d);
};

class myNode {
    constructor(params) {
        this.data = params;
        this.next = null;
    }
}
// creating the root node with new keyword(memory allocation(create object))
var root = new myNode(10);

// let's create a 10 node and assign the i*10 value to node->data
// we will create a iter for travel between nodes and assign the first node
var iter = root;

// i = 1 is root
for (let i = 2; i <= 10; i++) {
    // creating next object and assign the i*10 value to data
    iter.next = new myNode(i * 10);

    // iter is going to be next node
    iter = iter.next;
}

// let's print all the data if node has been created as object
iter = root;
console.log("Printing all the node data\n");
do {
    console.log(iter.data + " ");
    iter = iter.next;
    if (iter == null)
        console.log("\n");
} while (iter != null);

// let's find the linked list location which have the data = 40
// reassign the location of root to iter
iter = root;

// create a location variable andd assigning null(can be different for your algorithm)
let location = null;

// i will use for loop for location
for (let i = 1; iter != null; i++) {
    console.log("Searching for the value 40 in location " + i + "\n");

    if (iter.data === 40) {
        location = i;
        break;
    }

    iter = iter.next;
}

if (location != null)
    console.log("The value 40 found in " + location + " linked list!\n");
else
    console.log("The value 40 cannot found in linked list!\n");