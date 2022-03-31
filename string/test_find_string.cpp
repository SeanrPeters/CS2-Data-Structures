
#include "string.hpp"
#include <cassert>
#include <iostream>


//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String str = " helloworld";

    int result = str.findstr(0, "hello");
    std::cout << "String is: " << result << std::endl;

    assert(str.findstr(0, "hello") == 0);
  }
}

