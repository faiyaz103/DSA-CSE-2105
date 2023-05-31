# Deletion using Binary Search

The code you provided is a C++ program that performs binary search on an array and then deletes the element from the array if it is found. Here's a breakdown of how the code works:

1. The `del` function takes three parameters: a pointer to an integer array `p`, the size of the array `n`, and the position of the element to delete `pos`. This function is responsible for deleting the element at the given position and printing the updated array.

2. Inside the `del` function, a loop is used to shift all elements from `pos+1` to the end of the array one position to the left. This effectively removes the element at the given position.

3. After deleting the element, another loop is used to print the updated array.

4. The `bin_search` function takes three parameters: a pointer to an integer array `p`, the size of the array `n`, and the target element to search for `target`. This function performs binary search on the array.

5. The function initializes `begin` as 0 (the starting index) and `end` as `n-1` (the ending index) of the array.

6. It enters a while loop that continues as long as `begin` is less than or equal to `end`. This loop performs the binary search by updating the `begin` and `end` indices based on the comparison of the middle element with the target.

7. If the middle element is equal to the target, the `del` function is called to delete the element at the middle index and break out of the loop.

8. If the middle element is less than the target, the `begin` index is updated to `mid+1` to search in the right half of the array.

9. If the middle element is greater than the target, the `end` index is updated to `mid-1` to search in the left half of the array.

10. Finally, in the `main` function, the size of the array `n` and the target element `target` are taken as input from the user.

11. An integer array `a` of size `n` is declared.

12. A loop is used to input elements into the array `a` from the user.

13. The `bin_search` function is called with the array `a`, size `n`, and target `target`.

14. The program returns 0, indicating successful execution.
