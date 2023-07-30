# Memory Allocation in C++

## Manual Memory Management

To avoid wasting memory, you can *dynamically allocate* any memory required during runtime using the `new` and `delete` operators. For example:

```cpp
int main() {
 
    /memory allocation
    ptr = new int[num];
 
    //body of code
 
    //memory is released
    delete ptr;
 
}
```

If you create somehing with `new`, you **must** `delete` it: this prevents memory leaks.

### The Rule of Five

If a class defines one of the following functions, it should define all five:

1. Destructor
2. Copy constructor
3. Copy assignment operator
4. Move constructor
5. Move assignment operator

## Standard Library Smart Pointers

A *smart pointer* is an abstract data type that simulates a pointer while providing extra features such as **automatic memory management**. In the standard library, we have:

1. `unique_ptr` : a smart pointer that owns and manages another object through and disposes of that object when the `unique_ptr` goes out of scope.
2. `shared_ptr` : a smart pointer that retains shared ownership of an object through a pointer. Several `shared_ptr` objects may own the same object.