# Insertion

The given code is a C++ program that inserts a number at a specified position in an array. Let's go through the code step by step:

1. The program includes the necessary header file `iostream` for input/output operations.

2. The `using namespace std;` statement allows you to use the standard namespace without explicitly specifying it for each standard library component (e.g., `cout`, `cin`).

3. The `insert` function is defined, which takes four parameters:
   - `int *p`: A pointer to the array where the number will be inserted.
   - `int n`: The number of elements in the array.
   - `int num`: The number to be inserted.
   - `int pos`: The position at which the number should be inserted.

4. In the `insert` function, a loop is used to shift the elements to the right from position `pos` to `n-1`. This loop starts from the last element and moves each element one position to the right until it reaches the desired position.

5. After shifting the elements, the number `num` is inserted at position `pos` by assigning its value to `*(p+pos)`.

6. Finally, a loop is used to print the elements of the array after the insertion.

7. In the `main` function, the variables `n`, `num`, and `pos` are input from the user. These variables represent the number of elements in the array, the number to be inserted, and the position at which it should be inserted, respectively.

8. An array `a` of size `n` is declared to store the input elements.

9. A loop is used to input `n` elements into the array `a`.

10. The `insert` function is called with the array `a`, the number of elements `n`, the number to be inserted `num`, and the position `pos`.

11. The program ends by returning 0 from the `main` function.

Overall, the code inserts a number at a specified position in an array and then prints the array after the insertion.

# Deletion
     
The given code is a C++ program that deletes an element from an array. The `del` function takes three parameters: a pointer to the array `p`, the size of the array `n`, and the position of the element to be deleted `pos`. The function uses a loop to shift all the elements after the given position one step to the left, effectively deleting the element at the specified position. Then, it prints the updated array.

In the `main` function, the program takes input for the size of the array `n` and the position `pos`. It then creates an integer array `a` of size `n` and reads `n` elements from the user. Finally, it calls the `del` function with the array `a`, size `n`, and position `pos`.

Here's an example of how this program works:

```
Input:
6 2
1 2 3 4 5 6

Output:
1 2 4 5 6
```

In this example, the array initially contains the elements 1, 2, 3, 4, 5, and 6. The program deletes the element at position 2, which is the number 3. After deletion, the array is updated to contain the elements 1, 2, 4, 5, and 6, which are printed as the output.
