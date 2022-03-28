
//  String class test program
//
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

        // TEST
        String  str('a');

        // VERIFY
        assert(str == 'a');
    }

{
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str('B');

        // VERIFY
        assert(str == 'B');
    }



{
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str(' ');
    }

    std::cout << "Done testing test_ctor_char.cpp." << std::endl;

}



