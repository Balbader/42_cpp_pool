# static_cast

### Purpose
Used for general, well-defined conversions between types. This includes conversions between numberic types, conversions between classes where there is a clear inheritance relationship, and conversions defined by explicit or implicit conversion operatorsl.

### Compile-Time
`static_cast` checks are performed at compile time, making it faster but less flexible than `dynamic_cast`

### Use Case
Converting between numeric types (like `int` to `float`), converting pointers up the class inheritance hierarchy (from derived to base)

### Safety
Does not provide runtime checks, so it's less safe than `dynamic_cast` for downcasting
