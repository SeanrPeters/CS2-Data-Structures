
// bigint Test Program
//
// Tests:  int constructor, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test
        result = left + right;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------

 // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }



    //Add test cases as needed.
{
    // Setup fixture
    bigint left(22);
    bigint right(78);
    result;

   //test
 //verify
       assert(result == 100);
}
}

{
   // Setup fixture
   bigint left(357);
   bigint right(132);
   result;
  //test
  result = left + right;
  //verify
  assert(result == 489);
}

{
  //setup fixture
  bigint left(296);
  bigint rigt(704);
  resut;
  //test
  result = left + rigt;
  //verify
  assert(result == 1000);
}

{
  //setup fixture
  bigint left(1645);
  bigint right(1243);
  result;
  //test
  result = left + right;
  //verify
  assert(result ==  2888);
}
}

   {
      bigint left(1);
      bigint right(98);
      bigint result;
      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 98);
      assert(result == 99);
    }

   {
      //------------------------------------------------------
      // Setup fixture
      bigint left(45);
      bigint right(40);
      bigint result;

      // Test
      result = left + right;
  // Verify
      assert(left   == 45);
      assert(right  == 40);
      assert(result == 107);
    }
   {

      bigint left(89);
      bigint right(13);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 89);
      assert(right  == 13);
      assert(result == 113);
    }
   {
      //------------------------------------------------------
      // Setup fixture
      bigint left(200);
      bigint right(1000);
      bigint result;
 // Test
      result = left + right;

      // Verify
      assert(left   == 200);
      assert(right  == 1000);
      assert(result == 1200);
    }
 {
      //------------------------------------------------------
      // Setup fixture
      bigint left(333);
      bigint right(222);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 333);
      assert(right  == 222);
      assert(result == 555);
    }

   {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;

      // Test
      result = left + right;
 // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }

   {
      //------------------------------------------------------
      // Setup fixture
      bigint left(0);
     bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 0);
      assert(right  == 0);
      assert(result == 0);
    }

    std::cout << "Done with testing addition." << std::endl;
}






      
      // Setup fixture
      bigint left(1);
      bigint right(0);
      bigint result;
   {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(0);
