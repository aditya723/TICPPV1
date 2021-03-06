// Initializing static arrays in classes
class Values {
        // static consts are initialized in-place:
        static const int scSize = 100;
        static const long scLong = 100;
        // Automatic counting works with static arrays. // Arrays, Non-integral and non-const statics // must be initialized externally:
        static const int scInts[];
        static const long scLongs[];
        static const float scTable[];
        static const char scLetters[];
        static int size;
        static const float scFloat;
        static float table[];
        static char letters[];
};
/*
With static const of integral types you can provide the definitions inside the class, but for everything else (including arrays of integral types, even if they are static const you must provide a single external definition for the member. These definitions have internal linkage, so they can be placed in header files. The syntax for initializing static arrays is the same as for any aggregate, including automatic counting.
*/

int Values::size = 100; // both private and public members can be initialized this way.

const float Values::scFloat = 1.1;

const int Values::scInts[] = {
        99, 47, 33, 11, 7
};
const long Values::scLongs[] = {
        99, 47, 33, 11, 7
};
const float Values::scTable[] = {
        1.1, 2.2, 3.3, 4.4
};
const char Values::scLetters[] = {
        'a', 'b', 'c', 'd', 'e',
        'f', 'g', 'h', 'i', 'j'
};
float Values::table[4] = {
        1.1, 2.2, 3.3, 4.4
};
char Values::letters[10] = {
        'a', 'b', 'c', 'd', 'e',
        'f', 'g', 'h', 'i', 'j'
};
int main() { Values v; } ///:~
