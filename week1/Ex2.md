**Give short (1-2 sentences) answers to the following questions**

1. In C++, what's the difference between a declaration and a definition?
- Declarations tell the compiler that something exists, without providing implemetation or allocating memory
- Definitions create avariable or provide implementation for a function or class, allocating memmory.

2. What are header files used for?
Header files allow code reuse. Multiple files can use the same header to to use that header's declarations. Iostream is the standard c++ header file, providing declarations for cin, cout etc.

3. When a compiler creates a program, in what part of the construction process does it use header files and in what part libraries? (Answer the question by focusing on the fact that the compiler uses header files and libraries.)
Header files are used during compilation and libraries during linking.
The compiler reads the header files to check synthax of the declarations in the functions, variables etc, but doesn't read the actual code that makes them work. On the other hand, the librries contain the actual code for the functions/variables. The linker combines your code with the code from those libraries to create a runable program. 

4. Is a library an object module? Explain, and do not just answer yes or no.
Libraries are a collection of object files packaged togheter for reuse. So, a library is more than an object module.

5. Why is an object file obtained after compiling a source containing int main() not an executable program?
An object file obtained this way is not an executable because it does not contain all the information neccesary to run, like the links to external libraries or object files.