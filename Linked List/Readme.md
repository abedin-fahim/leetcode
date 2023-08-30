## Why LinkedList? 

### Memory Management
One of the most common problem in Array is Memory Management. Because we don't have sequential memory in Array. So Whenever we declare a new variable it can be stored anywhere in the memory. So we can not access the memory sequentially.

For example, we have 100 byte memory starting for 200 to 300, if we declare a variable int x = 20, it will be stored randomly anywhere in the memory i.e 250th. Now if we try to create an array of a[20]. It will take 20 * 4 = 80 byte memory. We can not store the array in the memory because we don't have 80 sequential memory. Bc x in stored in 250th memory and we have only 50 byte memory after that. So we can not store the array in the memory.

Linked List not sequential memory. It is a collection of nodes. Each node has two parts, one is data and another is the address of the next node. So we can store the data anywhere in the memory and we can store the address of the next node in the address part of the node. 

Singly Linked List has only one address part. So we can only traverse the list in one direction. Doubly Linked List has two address part. So we can traverse the list in both direction.

### Size
Another problem is static array has fixed size and can not be changed. We can not increase the size of the array. But Linked List is dynamic. We can increase the size of the list. 

Why do we need to allocate size in the first place? Because we need to allocate memory in the first place. So we need to know the size of the memory. But in Linked List we don't need to allocate memory in the first place. We can allocate memory dynamically. So we don't need to know the size of the memory.

We will use user defined data type to create a node. Because we need to store two things in the node, one is data and another is the address of the next node. 

*One thing to note here is that the last node will have NULL in the address part.*

The first value of the list is called head. We will create a head node and store the address of the first node in the head node.