# Stack Implementation Using Array

1. The constant `mxsize` is defined with a value of 100, representing the maximum size of the stack.

2. The `Stack` class is defined, which encapsulates the stack implementation.

3. The `top` variable keeps track of the index of the top element of the stack, and the array `a` is used to store the elements.

4. The constructor `Stack()` initializes the `top` variable to -1, indicating an empty stack.

5. The `isfull()` function checks if the stack is full by comparing `top` with `mxsize - 1`. If `top` is greater than or equal to `mxsize - 1`, the stack is considered full and `true` is returned; otherwise, `false` is returned.

6. The `isempty()` function checks if the stack is empty by checking if `top` is -1. If `top` is -1, the stack is considered empty and `true` is returned; otherwise, `false` is returned.

7. The `push(int value)` function adds an element to the stack. It first checks if the stack is full using the `isfull()` function. If the stack is full, it prints "Stack Overflow." Otherwise, it increments `top` by 1 and assigns `value` to `a[top]`.

8. The `pop()` function removes the top element from the stack. It first checks if the stack is empty using the `isempty()` function. If the stack is empty, it prints "Stack Underflow." Otherwise, it decrements `top` by 1.

9. The `peek()` function returns the value of the top element of the stack without removing it. It first checks if the stack is empty using the `isempty()` function. If the stack is empty, it prints "Stack is empty" and returns -1. Otherwise, it returns `a[top]`.

10. In the `main()` function:
   - An instance of the `Stack` class named `st` is created.
   - The `pop()` function is called on the empty stack, which prints "Stack Underflow."
   - The `peek()` function is called on the empty stack, which prints "Stack is empty" and returns -1.
   - Four elements (5, 2, 6, 13) are pushed onto the stack using the `push()` function.
   - The value of the top element is printed using `peek()`.
   - The `pop()` function is called to remove the top element from the stack.
   - The value of the new top element is printed using `peek()`.

Overall, this code demonstrates the basic operations of a stack: push, pop, and peek.
