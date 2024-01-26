
// By convention CPP files have a .cpp extension

// cstdio is a library for handling I/O operations
#include <cstdio>

// C++ programs have a single entry point
int main()
{

    // The printf function is imported from <cstdio>
    printf("Hello World!");

    // The function exits by returning 0 (exit code)
    // Exit codes are integer values that describe function execution
    return 0;
    // Having a return statement in main is optional (default is 0)
}

// To compile this program manually:
// g++ hello.cpp -o hello

// The output of the compilation is an executable file called "hello"