/* Learning C! */

// pointer declaration (object pointed by p)
int *p
// assign an address (x) to a pointer (p)
p = &x
// structure deference: member b of object pointed by a
a->b
// structure reference: member b of object a
a.b

// typedef is a reserved keyword in the C and C++ programming languages.
// It is used to create an alias name for another data type.
typedef
// A struct in the C programming language is a complex data type declaration that defines a physically grouped list of variables to be placed under one name in a block of memory, allowing the different variables to be accessed via a single pointer
struct
// In the C programming language, an external variable is a variable defined outside any function block.
// On the other hand, a local (automatic) variable is a variable defined inside a function block.
extern
// The #define directive causes the compiler to substitute "value" for each occurrence of "CONSTANT" in the source file.
#define CONSTANT value

// In C, it's okay to not write all the parts of a for loop. However, be careful, as it might end up being an infinite loop.
for ( ; ; something = something_else)