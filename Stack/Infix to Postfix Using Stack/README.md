# Convert an infix expression to postfix notation

The given code is an implementation of a stack using an array and a function to convert an infix expression to postfix notation.

Let's break down the code and understand its functionality:

1. The code begins with the inclusion of the `<bits/stdc++.h>` header file, which includes most of the standard C++ library headers.

2. The constant `mxsize` is defined with a value of 100, which represents the maximum size of the stack array.

3. The code defines a class named `Stack` to implement the stack data structure. The class contains private data members `top` (representing the top of the stack) and an integer array `a` to store the elements of the stack.

4. The class provides member functions to check if the stack is full (`isfull()`), empty (`isempty()`), push elements onto the stack (`push()`), pop elements from the stack (`pop()`), and retrieve the element at the top of the stack (`peek()`).

5. The `isfull()` function checks if the stack is full by comparing the value of `top` with `mxsize-1`. If `top` is greater than or equal to `mxsize-1`, the stack is considered full.

6. The `isempty()` function checks if the stack is empty by checking if `top` is equal to -1.

7. The `push()` function adds an element to the stack. If the stack is full, it prints "Stack Overflow." Otherwise, it increments `top` and assigns the value to the corresponding index in the array `a`.

8. The `pop()` function removes an element from the top of the stack. If the stack is empty, it prints "Stack Underflow." Otherwise, it decrements `top` to remove the top element.

9. The `peek()` function returns the element at the top of the stack. If the stack is empty, it prints "Stack is empty" and returns -1.

10. The `precheck()` function is defined outside the class and is used to determine the precedence of operators. It takes a character as input and returns an integer value representing the precedence. Higher precedence values indicate higher precedence.

11. The `infixtopostfix()` function takes a string `s` as input and converts the infix expression to postfix notation. It uses the stack to store operators and performs the conversion based on the precedence of operators.

12. The function initializes an empty stack (`st`) and an empty result string (`res`).

13. It iterates through each character of the input string `s`.

14. If the current character is an opening parenthesis '(', it is pushed onto the stack.

15. If the current character is an operand (a lowercase alphabet character), it is appended to the result string.

16. If the current character is a closing parenthesis ')', it pops elements from the stack and appends them to the result string until an opening parenthesis is encountered. The opening parenthesis is then popped from the stack as well.

17. If the current character is an operator, it checks the precedence of the operator with the operator at the top of the stack. If the precedence of the current operator is less than or equal to the precedence of the top operator, it pops the top operator from the stack and appends it to the result string. This process continues until a lower precedence operator is encountered or the stack becomes empty. Finally, the current operator is pushed onto the stack.

18. After processing all the characters in the input string, any remaining operators in the stack are popped and appended to the result string.

19. The final postfix expression stored in the result string (`res`) is printed.

20. In the `main()` function, a sample infix expression is defined as a string
