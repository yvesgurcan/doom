/* Learning C */

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

// <<= and << operators
num <<= 1
// The expression above is the same as
num = num << 1
// Where the << operator shifts num by the number of bits specified on the right (in this case, 1).
// Shifting left is equivalent to multiplication by powers of 2. So, num << 1 is equal to
num = num * 2

// >>=
// Same as <<= excepts that it shifts the number of bits to the left.
num >>= 1
// Shifting right is equivalent to dividing by 2. So, num >> 1 is equal to
num = num / 2

// &= operator
target->flags &= MF_NOGRAVITY
// The expression above is the same as
target->flags = target->flags & MF_NOGRAVITY
// The & operator performs a bitwise logical AND operation on integral operands and logical AND on bool operands.
// The output of this operation behaves like this:
/*
    0101    (target->flags)
    1100    (MF_NOGRAVITY)
    ----
    0100    (output)
*/
// Any time both of the expressions have a 1 in a digit, the result has a 1 in that digit. Otherwise, the result has a 0 in that digit.

// |= operator
target->flags |= MF_CORPSE|MF_DROPOFF
// This is the same as &= except that the operator performs an OR operation.

// ~ operator
~MF_NOGRAVITY
// This operator is the equivalent of not for bits.