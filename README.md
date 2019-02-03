# LibSort

**LibSort** is a C++ header-only library implementation of several common
sorting algorithms:

* Bubble sort
* Insertion sort
* Merge sort
* Quick sort
* Selection sort
* Shell's sort

Most of these algorithms are found in the MIT Press book, "Introduction to
Algorithms" by Thomas H. Cormen, Charles E. Leiserson, Ronald L. Rivest, and
Clifford Stein. This is commonly known as the "CLRS" book.

## Purpose

This library is primarily for those who want utilize to a specific sorting
algorithm with the most common std::vector data structure containing either
ints or strings. Additionally, This project uses Premake in order to simplify
the build process and also uses Catch for unit tests. Again, the goal is
simplicity. Given this simplicity, it should be very easy for others to extend
and improve upon this library.

## Building

This project uses [Premake 5](https://github.com/premake/premake-core/blob/master/README.md)
to generate the makefiles for your platform and compiler.

Generate Visual Studio 2015 project files:

`premake5 vs2015`

Generate GNU Makefiles:

`premake5 gmake`

For more information about Premake 

## Tests

I found the following [blog post](https://reprog.wordpress.com/2010/05/20/what-does-it-take-to-test-a-sorting-routine/)
useful when designing my tests.

## Coding/Style Guidelines

In general, the coding style follows the [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html).

There are some exceptions from the Google style:

	1. Filenames are CamelCase, not lowercase.
	2. Namespace names are CamelCase, not lowercase.

## Acknowledgments

I'd like to thank the community of GitHub contributors for providing me a rich
source of projects to draw inspiration from.
