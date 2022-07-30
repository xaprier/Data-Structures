using System;

class Program
{
    class myNode
    {
        // our datas
        public int data;
        public myNode next;
        // constructor for node
        public myNode(int d)
        {
            this.data = d;
            this.next = null;
        }
    }

    static void Main(string[] args)
    {
        // creating the root node with new keyword(memory allocation(create object))
        myNode root = new myNode(10);

        // let's create a 10 node and assign the i*10 value to node->data
        // we will create a iter for travel between nodes and assign the first node
        myNode iter = root;

        // i =  1 is root
        for (int i = 2; i <= 10; i++)
        {
            // creating next object and assign the i*10 value to data
            iter.next = new myNode(i * 10);

            // iter is going to be next node
            iter = iter.next;
        }

        // let's print all the data if node has been created as object
        Console.WriteLine("Printing all the node data");
        iter = root;
        while (iter != null)
        {
            Console.Write(iter.data + " ");
            iter = iter.next;
            if (iter == null)
                Console.WriteLine();
        }

        // let's find the linked list location which have the data = 40
        // reassign the location of root to iter
        iter = root;
        // create a location variable and assigning 0(can be different for your algorithm)
        int location = 0;

        // i will use for loop for location
        for (int i = 1; iter != null; i++)
        {
            Console.WriteLine("Searching for the value 40 in location " + i);

            if (iter.data == 40)
            {
                location = i;
                break;
            }

            iter = iter.next;
        }

        if (location != 0)
        {
            Console.WriteLine("The value 40 found in " + location + " linked list!");
        }
        else
        {
            Console.WriteLine("The value 40 cannot found in linked list!");
        }

    }
}