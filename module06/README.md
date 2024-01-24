# I. static cast

### Purpose
Used for general, well-defined conversions between types. This includes conversions between numberic types, conversions between classes where there is a clear inheritance relationship, and conversions defined by explicit or implicit conversion operatorsl.

### Compile-Time
`static_cast` checks are performed at compile time, making it faster but less flexible than `dynamic_cast`

### Use Case
Converting between numeric types (like `int` to `float`), converting pointers up the class inheritance hierarchy (from derived to base)

### Safety
Does not provide runtime checks, so it's less safe than `dynamic_cast` for downcasting

<br>

# II. dynamic cast

### Purpose
Primarily used for safe downcasting in class hierarchies

### Runtime check
Performs a runtime check to ensure the validity of the castl. It's used in scenarios involving polymorphism, where the exact type of the object might not be known

### Requirements
The classes involved must be polymorphic (i.e. have at least one virtual function)

### Use Case
Safe downcasting in ingeritance hierarchies (from base to derived)

### Safety
Returns `nullptr` for pointers or throws `std::bad_cast` for reference on failure, providing safety against invalid casts

<br>

# III. reinterpret cast

### Purpose
Provides a low-level reinterpreting of bit patterns. It allws you to treat the sequence of bits of one object as if it were a different object

### NO checks
No checks are performed, making this cast potentially dangerous and its use should be limited

### Use Case
Used for conversions such as casting a pointer to an `int` or `char` to a different type of pointer, of for casting between pointers and integral types.

### Safety
Very little safety; it's up to the programmer to ensure that the reinterpretation is valid. Misuse can lead to undefined behavior.
