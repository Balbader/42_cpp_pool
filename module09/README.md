# Containers

In C++, a container is a class or a data structure that stores and organizes objects (elements) in memory. Containers manage the storage space for their elements and provide member functions to access and manipulate them. The C++ Standard Template Library (STL) provides a set of container classes designed for generic programming, which means they can be used to store objects of almost any type.

The main types of containers in the STL are:

## Sequence Containers:

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

## Associative Containers:

These containers automatically sort their elements or allow fast retrieval based on keys. Examples include:

+ set: Collection of unique keys, sorted by keys.
+ multiset: Collection of keys, sorted by keys, allows duplicate keys.
+ map: Collection of key-value pairs, sorted by keys, keys are unique.
+ multimap: Collection of key-value pairs, sorted by keys, allows duplicate keys.

A great example of an associative container in C++ is the map. The map container stores elements formed by a combination of a key value and a mapped value, following a specific order. In a map, the key values are unique and each key maps to exactly one value. The elements in a map are always sorted by their key following a specific strict weak ordering criterion set on container construction.

Here's a basic example of how to use a map in C++:

```cpp
#include <iostream>
#include <map>
#include <string>

int main() {
    // Create a map where each key is a string and the associated value is an int
    std::map<std::string, int> ageMap;

    // Insert key-value pairs into the map
    ageMap["Alice"] = 30;
    ageMap["Bob"] = 25;
    ageMap["Charlie"] = 35;

    // Access and print elements using an iterator
    std::cout << "Age Map:" << std::endl;
    for (auto it = ageMap.begin(); it != ageMap.end(); ++it) {
        std::cout << it->first << " is " << it->second << " years old." << std::endl;
    }

    // Find and access an element by its key
    auto search = ageMap.find("Alice");
    if (search != ageMap.end()) {
        std::cout << "Found Alice, age: " << search->second << std::endl;
    } else {
        std::cout << "Alice not found in the map." << std::endl;
    }

    // Modify the value associated with a key
    ageMap["Bob"] = 26;

    // Remove an element from the map by its key
    ageMap.erase("Charlie");

    return 0;
}
```
In this example:

A map named ageMap is created where the keys are strings (names) and the values are integers (ages).
Key-value pairs are inserted into the map using the [] operator.
The map is iterated over using an iterator, and both the key (first) and the value (second) of each pair are printed.
The find method is used to search for a key, and its associated value is accessed if the key is found.
The value for a specific key is updated.
An element is removed from the map using the erase method with a key.
This code demonstrates how to create a map, insert elements, access and modify values, find elements, and remove elements from the map.

## Unordered Associative Containers:

Implementations of associative containers based on hash tables. These containers do not sort their elements but allow for fast access based on keys. Examples include:

+ unordered_set: Collection of unique keys, hashed by keys.
+ unordered_multiset: Collection of keys, hashed by keys, allows duplicate keys.
+ unordered_map: Collection of key-value pairs, hashed by keys, keys are unique.
+ unordered_multimap: Collection of key-value pairs, hashed by keys, allows duplicate keys.

An excellent example of an unordered associative container in C++ is the unordered_map. An unordered_map is similar to a regular map, but instead of storing elements in a sorted order, it stores them using a hash table. This allows for faster access on average, at the cost of losing the order of elements.

Here's a basic example of how you can use an unordered_map in C++:

```cpp
#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Create an unordered_map where each key is a string and the associated value is an int
    std::unordered_map<std::string, int> wordCount;

    // Insert key-value pairs into the unordered_map
    wordCount["apple"] = 1;
    wordCount["banana"] = 2;
    wordCount["orange"] = 3;

    // Access and print elements using an iterator
    std::cout << "Word Counts:" << std::endl;
    for (const auto& pair : wordCount) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Find and access an element by its key
    auto search = wordCount.find("banana");
    if (search != wordCount.end()) {
        std::cout << "Count for 'banana': " << search->second << std::endl;
    } else {
        std::cout << "'banana' not found in the map." << std::endl;
    }

    // Modify the value associated with a key
    wordCount["apple"] = 5;

    // Remove an element from the unordered_map by its key
    wordCount.erase("orange");

    return 0;
}
```
In this example:

An unordered_map named wordCount is created, where the keys are strings and the values are integers.
Key-value pairs are inserted into the unordered_map using the [] operator.
The unordered_map is iterated over using a range-based for loop, and both the key and the value of each pair are printed.
The find method is used to search for a key, and its associated value is accessed if the key is found.
The value for a specific key is updated.
An element is removed from the unordered_map using the erase method with a key.
This code demonstrates the basic operations of creating an unordered_map, inserting elements, accessing and modifying values, finding elements, and removing elements from the map. The primary advantage of unordered_map over map is its efficiency in accessing elements, especially when the dataset is large.

## Container Adaptors:

Provide a different interface for sequential containers. Examples include:

+ stack: Adapts a container to provide stack (LIFO - Last In First Out) operations.
+ queue: Adapts a container to provide queue (FIFO - First In First Out) operations.
+ priority_queue: Adapts a container to provide priority queue.

Each type of container has its own characteristics and is suitable for different kinds of tasks. The choice of container depends on factors like the type of operations you need to perform, the efficiency of these operations, memory usage, and whether or not you need to maintain order among the elements.
