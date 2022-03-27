
#ifndef BIGINT_HPP_
#define BIGINT_HPP_

#include <iostream>
#include<cassert>
#include <fstream>
#include <cstdlib>


const int capacity = 200;
class bigint
{
  public:
  void zero();
  bigint();
  bigint(const char[]);
  bigint(int);
  void debugPrint(std::ostream&) const;
  void newstream(std::ostream&) const;
  bool operator == (const bigint&)const;
  bigint operator + (bigint) const;
  friend std::ostream& operator << (std::ostream&, bigint);
  friend std::istream& operator >> (std::istream&, bigint&);
  int operator[](int) const;
  bigint timesDigit(int) const;
  bigint times10(int) const;
  bigint operator* (bigint&) const;
  private:
  int biArr[capacity];
};
#endif


