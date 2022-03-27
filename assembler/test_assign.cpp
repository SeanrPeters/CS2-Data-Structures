
#include <cassert>
#include <iostream>
#include "stack.hpp"
#include "string.hpp"

int main()
{


{
    stack<String> first;
    stack<String> two;

    // TEST
    x.push("word");
    second = first;

    // VERIFY
    assert(second.top() == "word");
    assert(first.empty() == false);
    assert(second.empty() == false);
  }

  {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  first;
        stack<String>  second;

        // TEST
        first.push(String("one"));
        first.push(String("two"));
        first.push(String("three"));
        second.push(String("four"));
        second.push(String("five"));
        second.push(String("six"));
        first.swap(second);

        // VERIFY
        assert(second.top() == String("three"));
        assert(first.top() == String("six"));
     }
std::cout << "Done testing assing.pp" << std::endl;

  {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  first;
        stack<String>  second;

        // TEST
        first.push(String("one"));
        first.push(String("two"));
        first.push(String("three"));
        second.push(String("four"));
        second.push(String("five"));
        second.push(String("six"));
        first.swap(second);

        // VERIFY
        assert(second.top() == String("three"));
        assert(first.top() == String("six"));
     }
std::cout << "Done testing assing.pp" << std::endl;
}

