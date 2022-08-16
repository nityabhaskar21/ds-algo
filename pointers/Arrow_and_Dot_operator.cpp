#include<iostream>

// The dot and arrow operator are both used in C++ to access the members of a class. 
// They are just used in different scenarios. 
// In C++, types declared as a class, struct, or union are considered "of class type". 
// So the following refers to both of them.

// a.b is only used if b is a member of the object (or reference[1] to an object) a. 
// So for a.b, a will always be an actual object (or a reference to an object) of a class.
// a →b is essentially a shorthand notation for (*a).b, ie, 
// if a is a pointer to an object, then a→b is accessing the property b of the object that points to.


class A {
   public: int b;
   A() { b = 5; }
};
int main() {
   A a = A();
   A* x = &a;
   std::cout << "a.b = " << a.b << "\n";
   std::cout << "x->b = " << x->b << "\n";
   return 0;
}