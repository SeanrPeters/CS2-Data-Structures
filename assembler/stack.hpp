
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

public:
  Node(): next(0) {};
  Node(const T& item): data(item), next(0) {};
  T data;
  Node<T>* next;

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

    T         top       () const;
        T         pop       ();
        void      push      (const T&);

private:
        Node<T>   *tos;
};



template <typename T>
stack<T>::stack()
{
  tos = 0;
}

template <typename T>
stack<T>::stack(const stack<T>& var)
{
  Node<T> *bottom;
  Node<T> *tempNode;
  Node<T>  *temptos;
  tos = 0;
  temptos = var.tos;

  while (temptos != 0)
  {
    tempNode = new Node<T>(temptos->data);

    if (tos == 0)
      tos = tempNode;

    else
      bottom->next = tempNode;

  bottom = tempNode;
  temptos = temptos -> next;
  }
}

template <typename T>
void stack<T>::swap(stack<T>& var)
{
    Node<T> *temp = tos;
  tos = var.tos;
 var.tos = temp;
}

template <typename T>
stack<T>::~stack()
{
  while (tos != 0)
  {
    Node<T> *temp = tos;
    tos = tos -> next;
    delete temp;
   }
}


#endif



