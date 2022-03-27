
#include <iostream>
#include <vector>
#include "stack.hpp"
#include "utilities.hpp"
#include "../string/string.hpp"


String inf_post(char const *var)
{
  stack<String> str;
  String token;
  String right;
  String oper;
  String left;

  char const *ch = var;
  while(*ch != ';')
 {
    token = nextToken(ch);
    if (token == ")")
     {
        right = str.pop();
        oper = str.pop();
        left = str.pop();
        str.push(left + " " + right + " " + oper);
     }
      else if (token != " " && token != "(")
      str.push(token);
  }
  return str.pop();
}

void toAssembly(const String& expr)
{
  stack<String> result;
  std::vector<String> tokens = expr.split(' ');
  String lhs;
  String rhs;
  unsigned int loc = 0;
  bool n[tokens.size()];

  for(unsigned int i = 0; i < tokens.size(); ++i)
    n[i] = false;
     
 while((tokens.at(loc) != "") && (tokens.at(loc) != " ")&&(loc < tokens.size() - 1))
    {
      String t = tokens.at(loc);
      ++loc;

      if((t != "*") && (t != "* ") && (t != " *") && (t != "-") && (t != "- ") && (t != " $
           && (t != "+") && (t != "+ ") && (t != " +") && (t != "/") && (t != "/ ") && (t $
        result.push(t);

      else
     {
        rhs = result.pop();
        lhs  = result.pop();
        result.push(sEval(lhs, t, rhs, n));
      }
    }
}



String evaluate(const String& lhs, const String& rhs,const String str, bool b[]){
  String result;
  String load;
  String operCm;
  String store;

  load = "load";
  store = "store";

  int i = 0;

  while(b[i])
    ++i;

  b[i] = true;

  result = "tmp" + toString(i + 1);

  if     ((str == "-") || (str == "- ") || (str == " -"))
    operCmd = "subtract";

  else if((str == "+") || (str == "+ ") || (str == " +"))
    operCmd = "add";
          
 else if((oper == "*") || (oper == "* ") || (oper == " *"))
    operCmd = "multiply";

  else if((oper == "/") || (oper == "/ ") || (oper == " /"))
    operCmd = "devide";

  else
    operCmd = "?";

  std::cout << std::setw(4) << load    << std::setw(10) << lhs    << '\n';
  std::cout << std::setw(4) << operCmd << std::setw(10) << rhs    << '\n';
  std::cout << std::setw(4) << store   << std::setw(10) << result << '\n';

  return result;
}





    
