
#include "bigint.hpp"

int main()
{
std::ifstream file("data1-1.txt");

if (!file)
{
  std::cout << "error! could not open data1-1.txt";
  exit(1);
}

bigint firstNum, secondNum;
bigint sum = firstNum + secondNum;

while (file >> firstNum && file >> secondNum)
{

  std::cout << "The first number: " << firstNum << std::endl;
  std::cout << "The second number: " << secondNum << std::endl;

  std::cout << "The sum of the first and second numbers: " << sum <<std::endl;
}

file.close();
return 0;
}




