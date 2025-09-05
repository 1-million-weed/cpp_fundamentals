Submit:

- The listing (of course, see the introductory text above this exercise) of your program;

- The commands you entered to compile and link the program;
g++ -c hello.cc -o hello.o  #compile and create object file
g++ hello.o -o hello        #link object file into executable
./hello                     #run executable
ls -l hello.cc              #list the details of the file

- The short descriptions of object file and executable;
hello.o - This is an intermidiate file created after compiling containing machine code. It can't be executed because it lacks references. It needs to be linked into an executable to be able to be ran.
hello - After linking the object file(s) you get this file, an execuatble. This can be run by the operating system.

- The program's output;
Hello World!

- The size in bytes (not kBytes!) of:
    - the source file: 68 bytes
    - the object file: 1896 bytes
    - the executable program (strip it first, using the -s switch when creating the executable): 14472 bytes after striping; 
                              16352 bytes before striping
    - the file iostream: 3074 bytes

