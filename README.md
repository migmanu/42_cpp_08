# 42_cpp_08
My solution for 42 Berlin's cpp_08 project.

# Study notes

## Templated Containers

In C++, templated containers are a part of the Standard Template Library (STL). They are generic types that allow you to store and manipulate collections of items. The type of items can be specified at the time of creating the container. Some of the most commonly used templated containers include `std::vector`, `std::list`, `std::map`, etc.

For example, to create a vector of integers, you would do:

```cpp
std::vector<int> myVector;
```

## Type of containers in C++

### Sequence Containers
Class templates that implement data structures that can be accessed sequentially.
- `vector`
- `deque`
- `list`
- `array` (C++11)
- `forward_list` (C++11)

### Associative Containers
Class templates that implement sorted data structures that can be quickly searched with the use of keys.
- `set` collection of unique keys, sorted by keys
- `map` collection of key-value pairs, sorted by unique keys
- `multiset` collection of keys, sorted by keys
- `multimap` collection of key-value pairs, sorted by keys

### Unordered Associative Containers (C++11)
Class templates that implement unsorted (hashed) data structures that can be quickly searched on average (O(1)), worst case O(n).
- `unordered_set` collection of unique keys, hashed by keys
- `unordered_map` collection of key-value pairs, hashed by unique keys
- `unordered_multiset` collection of keys, hashed by keys
- `unordered_multimap` collection of key-value pairs, hashed by keys

## Iterators
Iterators in C++ are a fundamental part of the Standard Template Library (STL). They provide a way to access the elements of a container (like arrays or lists) sequentially without exposing the underlying details of the container's implementation.

### Types of Iterators

There are five types of iterators in C++:

1. **Input Iterators:** They are used to read sequential data from a container.
2. **Output Iterators:** They are used to write sequential data to a container.
3. **Forward Iterators:** They are a combination of input and output iterators and can move in a forward direction.
4. **Bidirectional Iterators:** They are like forward iterators, but can also move in a backward direction.
5. **Random Access Iterators:** They can move directly to any element in the container, not just the next or previous one.

### Using Iterators

Iterators are used with a specific syntax that is similar to pointers. Here is an example of how to use an iterator with a `std::vector`:

```cpp
std::vector<int> myVector;
myVector.push_back(1);
myVector.push_back(2);
myVector.push_back(3);

// Create an iterator for the vector
std::vector<int>::iterator it;

// Use the iterator to loop through the vector
for(it = myVector.begin(); it != myVector.end(); ++it) {
    std::cout << *it << std::endl;
}
```

## Algorithms

The STL also provides several generic algorithms that can be used with its containers. These algorithms include common operations such as sorting (`std::sort`), searching (`std::find`), and more.

For example, to sort a vector of integers, you would do:

```cpp
std::vector<int> myVector;
myVector.push_back(5);
myVector.push_back(3);
myVector.push_back(1);
myVector.push_back(4);
myVector.push_back(2);
std::sort(myVector.begin(), myVector.end());
```

To find an element in the vector, you would do:

```cpp
std::vector<int>::iterator it = std::find(myVector.begin(), myVector.end(), 3);
if (it != myVector.end()) {
    std::cout << "Found: " << *it << std::endl;
} else {
    std::cout << "Not found :(" << std::endl;
}
