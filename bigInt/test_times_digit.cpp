// bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);

        // Test
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);
}

   {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(5);

        // Test
        bi = bi.timesDigit(5);

        // Verify
        assert(bi == 25);
    }

    //Add test cases as needed.

    std::cout << "Done testing bigint * digit" << std::endl;
    return 0;
}


