# Variables

The basic variable types in C++ are:

- `int` for integer numbers;
- `double` for decimal numbers;
- `char` for individual characters;
- `string` for a sequence of characters;
- `bool` for true/false values.

Every variable has a **type** representing the information stored within it.

## Chaining

You can use the `<<` operator to chain outputs, for example:

```cpp
int age = 23;

std::cout << "Hello, I am " << age << " years old\n";
```

## User Input

You can take user input through `std::cin`, this uses `>>` however, for example:

```cpp
int tip = 0;

std::cin >> tip
```

## Datatype Modifiers

Datatype modifiers are used in conjunction with built-in data types to modify the length of data that a particular data type can hold. These include:
- `signed`
- `unsigned`
- `short`
- `long`

## Const

`const` (constant) variables cannot be changed by the program during execution, making it immutable.

## Type Casting

A type cast converts data from one type to another, for example:

```cpp
double weight1;
double weight2;

weight1 = 154.49;
weight2 = (int) weight1;

// weight2 is now 154.
```