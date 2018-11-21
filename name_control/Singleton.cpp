// Static member of same type, ensures that
// only one object of this type exists.
// Also referred to as the "singleton" pattern.
#include <iostream>
using namespace std;
class Egg {
        static Egg e;
        int i;
        Egg(int ii) : i(ii) {}
        Egg(const Egg&); // Prevent copy-construction
        public:
        static Egg* instance() { return &e; }
        int val() const { return i; }
};

Egg Egg::e(47);

int main() {
        //!  Egg x(1); // Error -- can't create an Egg
        // You can access the single instance:
        cout << Egg::instance()->val() << endl;
        
        /*if you were to remove the copy-constructor defined in the example above, you’d be able to create an Egg object like this:
          Egg e = *Egg::instance();
          Egg e2(*Egg::instance());
         */
} ///:~
