// pointer !
// think of it like another type of data!
// every variable in a c program is associated to a memory location on our system
#include <stdio.h>

// always declare a pointer to NULL so it doesnt point to anything that we dont wish

int doubleage(int *age) // now we deference our variable , if passed only the variable then it wouldnt change
{
    *age = *age * 2; // when age variable has been called it used its memory location and then in this function it defferences it and doubled its value
}
int main()
{
    int age = 19;
    int *pointer = &age; /*this *pointer means that it can store any memory address to any variable type*/
    int result = 0;
    result = *pointer + 1; // by dereferencing our pointer variable once again we get the value that is stored in our memory address
    printf("%d\n", result);

    char name = 'I';
    char *pname = &name; // this only works for a single characted for an array wont
    printf("%c character is stored in the memory location %p\nHello from %p\n", name, pname, pname);
    pname += 6; // nothing stops us from changing the memory location of our variable!!
    printf("%p new memory location\n", pname);
    doubleage(&age); // when calling this function we call it with our memory location linked to the age variable
    printf("%d", age);
    return 0;
}
