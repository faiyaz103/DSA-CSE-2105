# Creation of Singly Linked List

The code provided is an implementation of a singly linked list in C++. It allows the user to create a linked list by entering the number of elements and their values. The list is then displayed.

Here's a breakdown of the code:

1. The `node` class is defined to represent a node in the linked list. It contains an `int` data member and a `node*` link member.

2. The `creation` function is used to create a new node and add it to the end of the linked list. It takes a double pointer to the head of the list and the data value as parameters.

3. Inside the `creation` function, a new node is created using the `new` keyword. The data value is assigned to the node, and the link is set to `NULL`.

4. If the head of the list is `NULL`, it means the list is empty. So the newly created node is assigned as the head.

5. If the list is not empty, a temporary pointer `temp` is set to the head. The function iterates through the list until it reaches the last node (i.e., a node whose link is `NULL`). Once the last node is found, the link of that node is updated to point to the newly created node.

6. The `display` function is used to traverse the linked list and print its elements. It takes a double pointer to the head of the list as a parameter.

7. Inside the `display` function, a temporary pointer `temp` is set to the head. It iterates through the list, printing the data value of each node and moving to the next node by updating the `temp` pointer.

8. In the `main` function, the user is prompted to enter the number of elements they want to add to the list.

9. A loop is used to iterate `n` times, prompting the user to enter the value for each element and calling the `creation` function to add the element to the list.

10. After the loop, the `display` function is called to print the elements of the list.

11. The program ends by returning 0.
