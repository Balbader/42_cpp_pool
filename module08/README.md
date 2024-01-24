# Containers Templates, Iterators, Algorithms

## Container Template

In C++ programming, container templates are part of the Standard Template Library (STL), which provides a set of generic classes to handle data structures. These container templates allow you to store collections of objects and data in memory. They are called "templates" because they allow for the creation of containers for any data type, making them highly versatile and reusable.

Here are some of the major container templates in C++:

### Sequence Containers:

+ std::vector: Dynamic array that can change size. Provides fast random access and is used for storing sequences in contiguous memory.
+ std::list: Doubly linked list allowing fast insertion and deletion at any point in the list.
+ std::deque (double-ended queue): Similar to vector, but allows efficient insertion and deletion at both the beginning and the end.

### Associative Containers:
+ std::set: A collection of unique elements, sorted by keys.
+ std::map: A collection of key-value pairs, sorted by keys, where each key is unique.
+ std::multiset and std::multimap: Similar to set and map, but they allow duplicate keys.

### Unordered Associative Containers:

+ std::unordered_set and std::unordered_map: Implementations of hash tables. They provide fast access to elements based on keys but do not maintain any order.
+ std::unordered_multiset and std::unordered_multimap: Similar to unordered_set and unordered_map, but allow duplicate keys.

### Container Adapters:

+ std::stack: Adapts a container to provide stack (LIFO - Last In First Out) behavior.
+ std::queue: Adapts a container to provide queue (FIFO - First In First Out) behavior.
+ std::priority_queue: A container adapter that provides constant time lookup of the largest (by default) element.

Each container has its specific use case and characteristics:

+ Performance: Different containers offer different trade-offs in terms of access time, memory usage, and insertion/deletion efficiency.
+ Memory Allocation: Some, like std::vector, use contiguous memory, while others, like std::list, use non-contiguous memory.
+ Ordering: Some containers, like sets and maps, automatically order their elements, while others, like vectors and lists, maintain the order of insertion.

These container templates are incredibly useful for handling data structures in a generic, efficient, and abstract way. The choice of container depends on the specific requirements of the application, such as the type of operations performed most frequently (insertion, deletion, search, access), and the performance constraints.

## Iterators

In C++ programming, iterators are objects that enable you to traverse through the elements of a container (such as arrays, lists, or maps that are part of the Standard Template Library, STL). They are an essential component of the STL and provide a generalized way to access elements of a container sequentially, without exposing the underlying representation of the container.

Here's an overview of iterators in C++:

### Types of Iterators:
The STL defines several types of iterators, each with different capabilities:

+ Input Iterators: Used for reading sequential data. They can move forward (increment) and read from the pointed-to element.
+ Output Iterators: Used for writing sequential data. They can move forward and write to the pointed-to element.
+ Forward Iterators: Combine features of both input and output iterators but can only move forward.
+ Bidirectional Iterators: Like forward iterators, but can also move backward (decrement).
+ Random Access Iterators: Support all bidirectional operations plus direct access to any element (like accessing elements in an array).

### Iterator Operations:
Common operations that can be performed with iterators include:

+ Incrementing (++iter) to move to the next element.
+ Dereferencing (*iter) to access the value of the element pointed to by the iterator.
+ Comparing (iter1 == iter2, iter1 != iter2) to check if two iterators point to the same element.
+ Using Iterators: Iterators are used to access and manipulate elements in containers. For example, you can use them to iterate through a std::vector:

```cpp
std::vector<int> vec = {1, 2, 3, 4, 5};
for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << std::endl;
}
```
### Advantages of Iterators:

+ Abstraction: Iterators abstract the type of the container, so the same code can work with different types of containers.
+ Flexibility: They provide a uniform interface for container traversal, irrespective of the container's internal structure.
+ Iterator Invalidations: It's important to be aware that certain operations on containers can invalidate existing iterators. For example, adding elements to a std::vector might reallocate the entire array, invalidating all existing iterators.

### Auto and Range-Based Loops:
Modern C++ (C++11 and later) allows for simpler use of iterators:

Using auto keyword for type inference.
Range-based for loops for simpler syntax:

```cpp
for (auto element : vec) {
    std::cout << element << std::endl;
}
```
In summary, iterators are a fundamental part of the C++ STL, providing a standardized way to traverse through the elements of a container. They play a critical role in generic programming by abstracting the process of iterating over a sequence of elements.
