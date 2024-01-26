# Containers

In C++, a container is a class or a data structure that stores and organizes objects (elements) in memory. Containers manage the storage space for their elements and provide member functions to access and manipulate them. The C++ Standard Template Library (STL) provides a set of container classes designed for generic programming, which means they can be used to store objects of almost any type.

The main types of containers in the STL are:

### Sequence Containers:

They store elements in a linear sequence. Examples include:

+ vector: Dynamic array that can resize itself automatically.
+ list: Doubly-linked list.
+ deque: Double-ended queue that allows insertion and deletion at both ends.
+ array: Fixed-size array (introduced in C++11).
+ forward_list: Singly-linked list (introduced in C++11).

```cpp
#include <iostream>
#include <vector>

int main() {
    // Create a vector to store integers
    std::vector<int> myVector;

    // Add some elements to the vector
    myVector.push_back(10);
    myVector.push_back(20);
    myVector.push_back(30);

    // Access and print elements using a loop
    std::cout << "The vector elements are: ";
    for(int i = 0; i < myVector.size(); i++) {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    // Remove the last element
    myVector.pop_back();

    // Print the size of the vector
    std::cout << "The size of the vector after pop_back: " << myVector.size() << std::endl;

    // Iterate and print elements using an iterator
    std::cout << "Elements in vector: ";
    for(auto it = myVector.begin(); it != myVector.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
```
In this example:

A vector of integers is declared.
Elements are added to the vector using push_back().
The elements of the vector are accessed and printed using a for loop and the [] operator.
The pop_back() function is used to remove the last element from the vector.
The size of the vector is printed after removal of an element.
A range-based for loop (using iterators) is used to iterate over the vector and print its elements.

### Associative Containers:

These containers automatically sort their elements or allow fast retrieval based on keys. Examples include:

+ set: Collection of unique keys, sorted by keys.
+ multiset: Collection of keys, sorted by keys, allows duplicate keys.
+ map: Collection of key-value pairs, sorted by keys, keys are unique.
+ multimap: Collection of key-value pairs, sorted by keys, allows duplicate keys.

### Unordered Associative Containers:

Implementations of associative containers based on hash tables. These containers do not sort their elements but allow for fast access based on keys. Examples include:

+ unordered_set: Collection of unique keys, hashed by keys.
+ unordered_multiset: Collection of keys, hashed by keys, allows duplicate keys.
+ unordered_map: Collection of key-value pairs, hashed by keys, keys are unique.
+ unordered_multimap: Collection of key-value pairs, hashed by keys, allows duplicate keys.

### Container Adaptors:

Provide a different interface for sequential containers. Examples include:

+ stack: Adapts a container to provide stack (LIFO - Last In First Out) operations.
+ queue: Adapts a container to provide queue (FIFO - First In First Out) operations.
+ priority_queue: Adapts a container to provide priority queue.

Each type of container has its own characteristics and is suitable for different kinds of tasks. The choice of container depends on factors like the type of operations you need to perform, the efficiency of these operations, memory usage, and whether or not you need to maintain order among the elements.
