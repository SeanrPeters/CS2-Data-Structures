
#include <cassert>
#include <iostream>
#include "stack.hpp"
#include "string.hpp"

int main()
{

  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<String>  str;

    // TEST
    str.push("word");
    assert(str.empty() == false);
    str.pop();

    // VERIFY
    assert(str.empty() == true);
  }


  {
    //------------------------------------------------------
    // SETUP FIXTURE
    stack<int>  num;

    // TEST
    num.push(50);
    assert(num.empty() == false);
    num.pop();

    // VERIFY
    assert(num.empty() == true);
  }

std::cout << "Done testing push_pop.cpp" << std::endl;
}


