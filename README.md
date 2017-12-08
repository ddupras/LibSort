# LibSort

**LibSort** is a simple C++ implementation of several sorting algorithms:

* Bubble sort
* Insertion sort
* Merge sort
* Quick sort
* Selection sort
* Shell's sort

Most of these algorithms are found in the MIT Press book, "Introduction to Algorithms" by 
Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and Clifford Stein. This is commonly known
as the "CLRS" book.

## Purpose

This library is primarily for those who want utilize to a specific sorting algorithm with
the most common std::vector data structure containing either ints or strings. Additionally, This
project uses Premake in order to simplify the build process and also uses Catch for unit tests.
Again, the goal is simplicity. Given this simplicity, it should be very easy for others to
extend and improve upon this library.

## Building

This project uses Premake to generate the makefiles for your platform and compiler.

## Tests

I found the following [blog post](https://reprog.wordpress.com/2010/05/20/what-does-it-take-to-test-a-sorting-routine/)
useful when designing my tests.

