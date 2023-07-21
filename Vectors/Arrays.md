# Arrays in C++

**Like vectors, the array is a _data structure_ used to store a _sequential_ collection of elements: unlike vectors, its size cannot change.**

## Arrays vs. Vectors

Arrays are inherited from C - C++'s parent language - and represent low-level data structures that are incredibly rigid. In short, with arrays you:
* Cannot add or remove elements
* Can modify existing elements

Vectors are _modified_ arrays, and are not static in size. With vectors you:
* Can add or remove elements
* Can modify existing elements
* Can access their current size at _any_ time

## Creating an Array

When creating an array, you have to keep **two** pieces of information in mind:

1. The _type_ of data you want to store within it
2. _How many_ items you want it to be able to hold

You can initialise an array as follows:
```cpp
int favouriteNums[10]; //initialises an empty integer array that can hold up to 10 elements

int favouriteNums[] = {1, 2, 3, 4} //initialises an integer array that stores 4 elements
```

## Array Indices

Like vectors, each element in an array is assigned a specific **index** that starts at zero. In order to access or modify an element in an array, you have to refer to its index position and operate on it accordingly as shown below:
```cpp
char vowels[] {'a', 'e', 'i', 'o', 'u'}

vowels[0] = 'z' //changes 'a' to 'z'
```

It is worth remembering that in C++, you **cannot** add or remove elements after an array has been initialised, and can only modify existing elements without changing the size or shape of the structure.