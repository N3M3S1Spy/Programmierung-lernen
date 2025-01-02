# C++ List
## C++ List

A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.

However, two major differences between lists and vectors are:

1. You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.

2. Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.

To use a list, you have to include the `<list>` header file: 

```cpp
// Include the list library
#include <list>
```

## Create a List

To create a list, use the `list` keyword, and specify the **type** of values it should store within angle brackets `<>` and then the name of the list, like: `list<type> listName`.
### Example
```cpp
// Create a list called cars that will store strings
list<string> cars;
```
If you want to add elements at the time of declaration, place them in a comma-separated list, inside curly braces `{}`:
### Example
```cpp
// Create a list called cars that will store strings
list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Print list elements
for (string car : cars) {
  cout << car << "\n";
}
```
> **Note:** The type of the list (`string` in our example) cannot be changed after its been declared.

## Access a List

You cannot access list elements by referring to index numbers, like with arrays and vectors.

However, you can access the first or the last element with the `.front()` and `.back()` functions, respectively:
### Example
```cpp
// Create a list called cars that will store strings
list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Get the first element
cout << cars.front();  // Outputs Volvo

// Get the last element
cout << cars.back();  // Outputs Mazda
```

## Change a List Element

You can also change the value of the first or the last element with the `.front()` and `.back()` functions
### Example
```cpp
list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

// Change the value of the first element
cars.front() = "Opel";

// Change the value of the last element
cars.back() = "Toyota";

cout << cars.front(); // Now outputs Opel instead of Volvo
cout << cars.back();  // Now outputs Toyota instead of Mazda
```
