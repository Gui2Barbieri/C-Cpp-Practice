# Memory Address Demonstration in C++

This exercise demonstrates the difference between stack and heap memory addresses through various tests. The program shows how to use pointers to allocate, modify, and free memory in the heap, and how to display memory addresses in both the stack and heap.

## Description

The program consists of the following steps:

1. **Declare and initialize a null pointer**: The pointer is initially set to `nullptr`, meaning it doesn't point to any memory address.
2. **Display the memory address of the pointer**: The address of the pointer itself (in the stack) is printed.
3. **Display the memory address the pointer points to**: Initially, this is `nullptr` (heap).
4. **Allocate memory in the heap**: Memory is reserved in the heap and assigned to the pointer.
5. **Display the new memory address**: The pointer now points to a valid memory address in the heap.
6. **Display the value stored at the heap address**: Initially, this is a random value.
7. **Modify the value in the heap**: The value at the heap address is set to `50`.
8. **Display the modified value**: The new value stored in the heap is printed.
9. **Free the allocated memory**: The memory reserved in the heap is released.
10. **Display the value after deletion**: The value at the heap address is now undefined.
11. **Set the pointer to `nullptr`**: The pointer no longer points to any memory address.
12. **Display the pointer's address**: Confirm that the pointer is now `nullptr`.

This program helps in understanding how pointers work with stack and heap memory, and the importance of proper memory management in C++.

