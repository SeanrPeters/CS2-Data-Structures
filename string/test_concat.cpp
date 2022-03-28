
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  left("hello ");
    String right("world!");

    // TEST
    String result = left + right;
    std::cout << "Concatenation: " << result << std::endl;

    // VERIFY
    assert(str    == "hello ");
    assert(str2  == "world!");
    assert(result == "hello world!");
  }
  {
    //------------------------------------------------------
    // SETUP FIXTURE
    String  left("a");
    String right("b");

    // TEST
    String result = left + right;
    std::cout << "Concatenation: " << result << std::endl;

    // VERIFY
    assert(left    == "a");
    assert(right  == "b");
    assert(result == "ab");
  }

  String  left(" ");
    String right(" ");

    // TEST
    String result = left + right;
 std::cout << "Concatenation: " << result << std::endl;
  std::cout << "Concatenation: " << result << std::endl;

    // VERIFY
    assert(left    == " ");
    assert(right  == " ");
    assert(result == "  ");
  }

  std::cout << "Done testing Concat." << std::endl;
}


