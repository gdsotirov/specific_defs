# Specific definitions

Definitions automatically provided by the preprocessors of some compilers.

## Usage

Build the program by running make and then run it to see what is defined.

## The easier way

Compilers have they way for reporting predefined macros. For GCC it could
be done like this (see [Options Controlling the Preprocessor](https://gcc.gnu.org/onlinedocs/gcc/Preprocessor-Options.html)):

* For GCC (C language): `gcc -dM -E - < /dev/null`
* For G++ (C++ language): `g++ -dM -E -x c++ - < /dev/null`

_Note_: Option `-x` is important for `g++`, so that input is considered C++
source and you see all the pre-defined macros.

## Resources

* [Predefined macros](https://gcc.gnu.org/onlinedocs/cpp/Predefined-Macros.html) - Pre-defined
macros in GCC.
* [Pre-defined C/C++ Compiler Macros](https://sourceforge.net/p/predef/wiki/Home/) - An
overview of pre-defined compiler macros for standards, compilers, operating
systems, and hardware architectures.

