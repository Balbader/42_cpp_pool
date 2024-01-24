# Templates

Templates in C++ are a powerful feature used to implement generic programming. They allow you to write code that works with any data type and are particularly useful for creating reusable classes and functions. The primary use of templates is in the C++ Standard Template Library (STL), which provides a rich set of methods, such as containers and algorithms, that work with any data type.

Here's an overview of templates in C++:

Function Templates: These allow you to define a function without specifying the exact data types it will work with. Instead, you use placeholders for the types, and the compiler generates the necessary function definitions when the template is used with specific types.

Example:

```cpp
    template <typename T>
    T max(T x, T y) {
        return (x > y) ? x : y;
    }
```
Here, T is a template parameter that can be replaced with any data type when the function is called, like max<int>(10, 20) or max<double>(3.14, 2.71).

Class Templates: These are similar to function templates but are used to define generic classes. You can define a class to work with any data type by using template parameters.

Example:

```cpp
    template <typename T>
    class Stack {
    private:
        std::vector<T> elements;
    public:
        void push(T const& elem);
        void pop();
        T top() const;
        bool empty() const {
            return elements.empty();
        }
    };
```

In this example, Stack<T> is a generic stack class that can store elements of any type.

Non-Type Template Parameters: Templates can also have non-type parameters, like integers. These are used when a value rather than a type is to be specified in the template.

Example:

```cpp
    template <class T, size_t N>
    class FixedArray {
        T array[N];
    public:
        // Methods for FixedArray
    };
```

Here, FixedArray<T, N> defines an array of a fixed size N, with N being a non-type parameter.

Template Specialization: This allows you to define a specific implementation of a template for a particular data type.

Example:

```cpp
    template <>
    class Stack<bool> { 
        // Specialized implementation for a stack of bools
    };
```
In this case, a specialized version of the Stack class is defined specifically for boolean values.

## Advantages:

### Code Reuse:
Write a function or class once and use it with any data type.
Type Safety: Templates are type-safe, as the compiler generates the code for the specific type used.
Efficiency: Templates can be more efficient than void pointers or other generic techniques because they allow type-specific optimizations at compile time.
Considerations:

### Code Bloat:
The compiler generates separate instances of the template code for each type used, which can increase the size of the compiled binary.

### Complexity:
Template code can be difficult to write and debug due to its generic nature.
In summary, templates are a cornerstone of C++ programming, enabling generic programming and the creation of flexible, reusable, and efficient software components. They are extensively used in the STL and are vital for writing modern C++ code.
