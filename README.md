#Simple Memory Leak Example

So be careful with this one, you'll lose 40 bytes at a time.

Here is how to use this.  When we compile let's add one flag

    g++ -g leak.cpp

Then we can use a tool called `valgrind` to spot memory leaks for us:

    valgrind --leak-check=yes ./a.out

Observe what it says about the lost Heap memory.