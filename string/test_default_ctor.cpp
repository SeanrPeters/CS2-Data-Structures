
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    // TEST
    String  str;

    // VERIFY
    assert(str == "");
  }

  std::cout << "Done testing test_default_ctor.cpp" << std::endl;

}



