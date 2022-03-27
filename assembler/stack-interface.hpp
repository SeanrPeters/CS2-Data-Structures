
#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_
////////////////////////////////////////////////////////////////////////////
//
// File: stack.hpp
//
// Programmer:
// Updated:    Fall 2021
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//

#include <new>

////////////////////////////////////////////////////////////////////////////
//
template<typename T>
class Node {

};


////////////////////////////////////////////////////////////////////////////
// CLASS INV:
//
//
template <typename T>
class stack {
public:
              stack     ();
              stack     (const stack<T>&);
              ~stack    ();
    void      swap      (stack<T>&);
    stack<T>& operator= (stack<T>);
        bool      empty     () const;
        bool      full      () const;
        T         top       () const;
        T         pop       ();
        void      push      (const T&);

private:
  
};



#endif




