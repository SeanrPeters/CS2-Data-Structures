
//  String class test program
//
//  Name:  XXX
//  Tests: XXX
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("hi");
        String  right("hello");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == true);
        assert(left   == "hi");
        assert(right  == "hello");
    }

{
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left("hello");
        String  right("hi");

        // TEST
        bool result = (left < right);

        // VERIFY
        assert(result == false);
        assert(left   == "hello");
        assert(right  == "hi");
    }
std::cout << "Done testing test_default_ctor.cpp" << std::endl;
}
