*** Design A Queue Data Structure ***
## Chapter 1: Introduction 
Chapter 1: Introduction 
A queue is an ordered collection of items where the addition of new items happens at one end, called the “rear,” and the removal of existing items occurs at the other end, commonly called the “front.” As an element enters the queue it starts at the rear and makes its way toward the front, waiting until that time when it is the next element to be removed.
The most recently added item in the queue must wait at the end of the collection. The item that has been in the collection the longest is at the front. This ordering principle is sometimes called FIFO, first-in first-out. It is also known as “first-come first-served.”
In a queue, one end is always used to insert data (enqueue) and the other is used to delete data (dequeue), because queue is open at both its ends. In the queue only this     two operations are allowed enqueue and dequeue. 
Enqueue: to place something into a queue; to add an element to the tail of a queue;
Dequeue: to take something out of a queue; to remove the first available element from the head of a queue.
Types of Queue
•	  Simple queue.
•	  Circular queue.
•	  Priority queue.
•	  Double ended queue.
Simple Queue: The simple queue is a normal queue where insertion takes place at the FRONT of the queue and deletion takes place at the END of the queue
Circular queue: Circular Queue is a linear data structure in which the operations are performed based on FIFO (First In First Out) principle and the last position is connected back to the first position to make a circle. It is also called 'Ring Buffer'. enqueue (value) This function is used to insert an element into the circular queue.
Priority queue: In computer science, a priority queue is an abstract data type similar to regular queue or stack data structure in which each element additionally has a "priority" associated with it. In a priority queue, an element with high priority is served before an element with low priority.
Double ended queue: Double ended queue is a more generalized form of queue data structure which allows insertion and removal of elements from both the ends that is front and back.
We can do some operation of queue. As,
1.Push
2.Pop
3.Top
4.Size
5.Empty.

## Chapter 2: Uses of Queue
Queues are used for any situation where you want to efficiently maintain a First-in-first out order on some entities. These situations arise literally in every type of software development. This property of Queue makes it also useful in following kind of scenarios. 
1)	When a resource is shared among multiple consumers.
2)	When data is transferred asynchronously (data not necessarily received at same rate as sent) between two processes.
3)	Serving requests on a single shared resource, like a printer, CPU task scheduling etc. In real life scenario, Call Center phone systems uses Queues to hold people calling them in an order, until a service representative is free. Handling of interrupts in real-time system.
4)	Queue is used in networking to handle congestion.
5)	It also be used to implement a Breadth First Search - an algorithm which traverses all the vertices in a Graph which can be reached from a start vertex.
6)	Serving requests on a single shared resource, like a printer.
7)	CPU task scheduling.
8)	Call Center phone systems uses Queues to hold people calling them in an order, until a service representative is free.
9)	Printer to hold process. In CPU scheduling. As a page replacement policy (FIFO).
10)	 Handling of interrupts in real-time systems.
11)	 Operating systems often maintain a queue of processes that are ready to execute or that are waiting for a particular event to occur.
12)	 Computer systems must often provide a “holding area” for messages between two internal processes or programs, or between two systems over a network. This holding area is usually called a “buffer” and is often implemented as a queue, because we want the message time order to be retained.

## Function of Queue
### Structure :
```c
typedef struct Node node;
   struct Node   // a node named structure create
{
    int value;   //value declare
    struct Node *next;  //next node address declare
};
```
## Push
```c
node* push(node *temp, int value)
{
    node *head = temp, *new_node;
    if (temp == NULL)
    {
        node *new_head;
        new_head = (node*) malloc(sizeof (node) );
        new_head->value = value;
        new_head->next = NULL;
        return new_head;
    }
    while(temp->next)
        temp = temp->next;
    new_node = (node*) malloc(sizeof (node) );
    new_node->value = value;
    new_node->next = NULL;
    temp->next = new_node;
    return head;
}
```
## Pop
```c
node* pop(node *temp)
{
    if(temp != NULL)
    {
        node *new_head = temp->next;
        printf("\n Deleted value : %d ", temp->value);
        free(temp);
        return new_head;
    }
    printf("\nNo Elements Left, Empty Queue");
    return temp;
}
```
## Top
```c
void top(node *temp)
{
    if(temp != NULL)
    {
        printf("\nTop element : %d", temp->value);
    }
    else
    {
        printf("\nNo Top element ");
    }
}
```
## Size
```c
void size(node *temp)
{
    int count = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    printf("\n Size of Queue: %d", count);
}
```
## Display
```c
void display(node *temp)
{
    if (temp == NULL)
    {
        printf(" Queue is empty ");
        return;
    }
    while (temp != NULL)
    {
        printf("\t%d", temp->value);
        temp = temp->next;
    }
}
```
## Empty
```c
void empty(node *temp)
{
    if ((temp == NULL))
    {
        printf("\nQueue is empty.");
    }
    else
    {
        printf("\n Queue is not empty");
    }
}
```

