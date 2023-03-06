# Memory allocation

When we create a variable, a memory is allocated. Until now, the memory of all variable we use is automaticalled allocated and free at the end of the concerned scope. This is called static memory allocation.

 For example, all arrays we learn until now are static and then their size is fixed during declaration and cannot be modified during execution. Consider the case we don't know the number of items in our array. We may declare an array with very big size, 1000 for example and that will leads to waste of memory in case the programm need less and leak of memory in case it needs more(1001 for example).

Dynamic allocation of memory can be used to avoid that.

Dynamic allocation of memory consist to allocate memory whenever needed and to free the allocated memory when it's no longer needed.

Memory allocation consists of 3 steps:

* allocate the memory
* use the memory
* free the memory

In the following, we'll learn two different approach to allocate memory in C++ programming language:

* the C approach using cstdlib library
* the C++ approah using new and delete operators
