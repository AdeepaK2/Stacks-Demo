# Stacks-Demo
Simple stack representation using c by K2
# Stack Implementations

This repository contains two implementations of a stack data structure in C. 

## Array-based Stack (array_stack.c)

This implementation uses an array to represent a stack. It provides the following operations:

- `push`: Adds an element to the top of the stack.
- `pop`: Removes and returns the element from the top of the stack.
- `peek`: Returns the element at the top of the stack without removing it.
- `isEmpty`: Checks if the stack is empty.
- `isFull`: Checks if the stack is full.

### Usage

Compile the code using a C compiler, then run the executable. The main function demonstrates the usage of the stack operations.

## Linked List-based Stack (linked_list_stack.c)

This implementation uses a linked list to represent a stack. It provides similar operations as the array-based stack:

- `push`: Adds an element to the top of the stack.
- `pop`: Removes and returns the element from the top of the stack.
- `peek`: Returns the element at the top of the stack without removing it.
- `isEmpty`: Checks if the stack is empty.

### Usage

Compile the code using a C compiler, then run the executable. The main function demonstrates the usage of the stack operations.

## How to Compile and Run

To compile each implementation, use a C compiler such as GCC:

```bash
gcc array_stack.c -o array_stack
gcc linked_list_stack.c -o linked_list_stack
