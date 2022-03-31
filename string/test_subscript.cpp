#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE


    char ch[5] = {'h','e','l','l','o'};

    String  str(ch);

    // TEST
    char result = str[0];
    std::cout << "subscript: " << result << std::endl;
    // VERIFY
    assert(str  == String(ch));
    assert(result == 'h');
  }
}

