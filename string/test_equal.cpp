
#include "string.hpp"
#include <cassert>
#include <iostream>

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
        String  left('X');
        String  right('X');

        // TEST
        bool result = (left == right);

        // VERIFY
        assert(result == true);
        assert(left   == 'X');
        assert(right  == 'X');
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left(X);
        String  right(Y);

        // TEST
        bool result = (left ==  right);

        // VERIFY
        assert(result == false);
      assert(right  == 'X');
    }


{
        //------------------------------------------------------
        // SETUP FIXTURE
        String  left(s);
        String  right(s);

        // TEST
        bool result = (left ==  right);

        // VERIFY
        assert(result == true);
        assert(left   == 's');
        assert(right  == 's');
    }




std::cout << "Done testing Concat." << std::endl;

}
