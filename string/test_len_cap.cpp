
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String str = "hello";

    int first = str.length();
    int second = str.capacity();

    std::cout << "length: " << first << std::endl;
    std::cout << "capacity: " << second << std::endl;
    assert(first == 5);
    assert(second == 5);

  }
}

