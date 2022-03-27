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
        bi = bi.(1);

        // Verify
        assert(bi == 3);
    }



 {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(55);

        // Test
        bi = bi.(6);

        // Verify
        assert(bi == 27680640625);
    }

 {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(3);
   
        bi = bi.(0);

        // Verify
        assert(bi == 1);
    }


   {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(0);

        // Test
        bi = bi.(4);

        // Verify
        assert(bi == 0);
    }



 {
        //------------------------------------------------------
        // Setup fixture
        bigint bi(6);

        // Test
        bi = bi.(6);

        // Verify
        assert(bi == 46656);
    }



    std::cout << "Done testing times_10" << std::endl;
}



