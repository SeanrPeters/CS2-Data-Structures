
#include stack.hpp
#include <iostream>
#include <fstream>
#include "string.cpp"
#include "stack.hpp"



int main(int argc, char* argv[])
 {
  if(argc < 2)
  {
    std::cerr << "Input not found" << std::endl;
    return 0;
  }

  std::ifstream in(argv[1]);

  if(!in)
  {
    std::cerr << "Infix file found" << std::endl;
    return 0;
  }

  if(argc == 2)
 {
    String token;
    String infix;

     while(!in.eof())
     {
      in >> token;

     if((token != ";") && (token != ";\n") && (token != ";\r") && (token != ";\r\n"))
        infix += token + " ";

      else
      {
        std::cout << "Infix: "    << infix   << std::endl;
        String postfix = inToPost(infix);

        std::cout << "Postfix: "  << postfix << std::endl;
        toAssembly(postfix);
    }
    }
  }


  if(argc == 3)
  {
    std::ofstream out(argv[2]);
    String infix;
    String token;

    while(!in.eof())
     {
      in >> token;
      if((token != ";") && (token != ";\n") && (token != ";\r") && (token != ";\r\n"))
        infix += token + " ";

      else
      {
        out << "Infix: "    << infix    << "\n";
        String postfix = inToPost(infix);


        out << "Postfix: "  <<  postfix << "\n";
        toAssembly(postfix);
        infix = "";
      }
    }
    out.close();
  }

  in.close();
  return 0;
}

 
