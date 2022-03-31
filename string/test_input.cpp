
#include "string.hpp"
#include <cassert>
#include <iostream>
#include <fstream>

//===========================================================================
int main ()
{
  {
    //------------------------------------------------------
    // SETUP FIXTURE

    std::ifstream inFile;
    inFile.open("test_text.txt");

    String str;
    while(inFile >> str)
   {
      std::cout << str << std::endl;
    }

    inFile.close();

    std::cout << "Done testing input" << std::endl;

  }
}
