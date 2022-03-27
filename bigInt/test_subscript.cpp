
// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {

    {
        // Setup
        bigint bi(4);

        // Test
        int digit = bi[0];

        // Verify
        assert(bi    == 4);
        assert(digit == 4);
    }

{
        // Setup
        bigint bi(789);

        // Test
        int digit = bi[1];

        // Verify
        assert(bi    == 786);
        assert(digit == 8);
    }

    //Add test cases!!

    std::cout << "Done testing subscript." << std::endl;
    return 0;
}
