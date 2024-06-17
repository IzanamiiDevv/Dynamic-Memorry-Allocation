# Dynamic-Memorry-Allocation
An Example on using Dynamic Memorry Allocation in C

## Stack Memorry and Heap Memmorry

### Stack Memory

1. **Structure**: Stack memory operates in a last-in, first-out (LIFO) manner. It grows and shrinks automatically as functions push and pop local variables.
2. **Usage**: Used for static memory allocation. This includes:
   - Primitive data types (int, char, etc.).
   - References/pointers to objects (but not the objects themselves).
   - Function calls and execution contexts.
3. **Lifetime**: Variables are created when a function is called and destroyed when the function exits.
4. **Size**: Typically smaller and limited in size compared to heap memory.
5. **Access Speed**: Very fast access due to its LIFO structure and typically cache-friendly nature.
6. **Scope**: Variables are limited to the function/block scope where they are declared.

### Heap Memory

1. **Structure**: Heap memory is a large pool of memory from which blocks can be allocated and deallocated in any order.
2. **Usage**: Used for dynamic memory allocation. This includes:
   - Objects.
   - Dynamic arrays.
   - Data structures (like linked lists, trees, etc.).
3. **Lifetime**: Variables remain in memory until they are explicitly deallocated or the program ends. This allows for more flexible and long-lived data storage.
4. **Size**: Typically larger and more flexible than stack memory.
5. **Access Speed**: Slower than stack memory due to more complex memory management and potential fragmentation.
6. **Scope**: Variables can be accessed globally if the pointer/reference is passed around, but the actual memory remains in the heap.

### Example to Illustrate

```cpp
void exampleFunction() {
    int stackVar = 10; // Stored on the stack

    int* heapVar = new int(20); // Stored on the heap, pointer on the stack

    // ... do something ...

    delete heapVar; // Must manually deallocate heap memory
}
```

In this example:
- `stackVar` is a local variable stored on the stack.
- `heapVar` is a pointer stored on the stack, pointing to an integer on the heap.

### Summary

- **Stack memory** is used for static memory allocation and is managed automatically. It's fast and limited in size.
- **Heap memory** is used for dynamic memory allocation and must be managed manually. It's more flexible but can be slower and prone to fragmentation.

Understanding the difference between these types of memory is crucial for effective memory management in programming, especially in languages like C and C++ where manual memory management is required.

[Learn more here.](https://www.w3schools.com/c/c_memory_management.php)
