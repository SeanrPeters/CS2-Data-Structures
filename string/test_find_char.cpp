
#include "string.hpp"
#include <cassert>
#include <iostream>


//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String first = "helloworld";
    char second = 'l';

    int result = first.findch(0, second);
    std::cout << "Char: " << result << std::endl;

    assert(result == 3);

  }
}
