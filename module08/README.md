# Containers Templates, Iterators, Algorithms

## Container Template

In C++ programming, container templates are part of the Standard Template Library (STL), which provides a set of generic classes to handle data structures. These container templates allow you to store collections of objects and data in memory. They are called "templates" because they allow for the creation of containers for any data type, making them highly versatile and reusable.

Here are some of the major container templates in C++:

Sequence Containers:

std::vector: Dynamic array that can change size. Provides fast random access and is used for storing sequences in contiguous memory.
std::list: Doubly linked list allowing fast insertion and deletion at any point in the list.
std::deque (double-ended queue): Similar to vector, but allows efficient insertion and deletion at both the beginning and the end.
Associative Containers:

std::set: A collection of unique elements, sorted by keys.
std::map: A collection of key-value pairs, sorted by keys, where each key is unique.
std::multiset and std::multimap: Similar to set and map, but they allow duplicate keys.
Unordered Associative Containers:

std::unordered_set and std::unordered_map: Implementations of hash tables. They provide fast access to elements based on keys but do not maintain any order.
std::unordered_multiset and std::unordered_multimap: Similar to unordered_set and unordered_map, but allow duplicate keys.
Container Adapters:

std::stack: Adapts a container to provide stack (LIFO - Last In First Out) behavior.
std::queue: Adapts a container to provide queue (FIFO - First In First Out) behavior.
std::priority_queue: A container adapter that provides constant time lookup of the largest (by default) element.
Each container has its specific use case and characteristics:

Performance: Different containers offer different trade-offs in terms of access time, memory usage, and insertion/deletion efficiency.
Memory Allocation: Some, like std::vector, use contiguous memory, while others, like std::list, use non-contiguous memory.
Ordering: Some containers, like sets and maps, automatically order their elements, while others, like vectors and lists, maintain the order of insertion.
These container templates are incredibly useful for handling data structures in a generic, efficient, and abstract way. The choice of container depends on the specific requirements of the application, such as the type of operations performed most frequently (insertion, deletion, search, access), and the performance constraints.
