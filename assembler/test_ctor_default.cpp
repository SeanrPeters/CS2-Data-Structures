
#include <cassert>
#include <iostream>
#include "stack.hpp"
#include "string.hpp"

int main()
{

 {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<String> str;

    // TEST
    str.push("words");
    stack<String> copyCtr(str);

    // VERIFY
    assert(str.top() == copyCtr.top());
  }

{
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<int>  num;

    // TEST
    num.push(1000);
    stack<int> copyCtr(num);

    // VERIFY
    assert(num.top() == copyCtr.top());
  }
std::cout << "Done testing ctor_default.cpp" << std::endl;
}
