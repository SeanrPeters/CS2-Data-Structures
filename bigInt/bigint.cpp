
#include "bigint.hpp"



//initializes the bigint to 0
void bigint::zero()
{
  for (int i = 0; i < capacity; ++i)
  biArr[i] = 0;
}

//default constructor
bigint::bigint()
{
  zero();
}

//initialize bigint to a const char you provide
bigint::bigint(const char v[])
{
  zero();
  int x = 0;
  int s = 0;

  while(v[x] != '\0')
 {
  ++x;
  for(int i = x - 1; i >=0; i--)
   {
    s++;
    biArr[s] = int(v[i]) - int('0');
   }
  }
}

//initializes bigint to an int value you provide
bigint::bigint(int v)
{
  zero();
  for(int i = 0; i < capacity; i++)
  {
    biArr[i] = v % 10;
    v /= 10;

}

void bigint::debugPrint(std::ostream&) const
{
int i = 80;
 while(i >= 0)
 {
  std::cout << biArr[i] << "|";
  --i;
  }
}


std::ostream& operator << (std::ostream& out, bigint rhs)
{
  rhs.newstream(out);
  return out;
}

bool bigint::operator == (const bigint& compare) const
{

  bool isEqual = true;

for(int i = 0; i < capacity; ++i)

{
    if(biArr[i] == compare.biArr[i])
      isEqual = true;

    else
      return false;
  }

  return isEqual;
}


std::istream& operator >> (std::istream& inp, bigint& rhs)
{
  char ch;
  char temp [capacity];
  for (int i = 0; i < capacity; i++)
     inp >> ch;
  for (int j = 0; ch != ';' && j < capacity; ++j)
 {
  temp[j] = ch;
  inp >> ch;
  }

 rhs = bigint(temp);
 return inp;
}

bigint bigint::operator+(bigint rhs) const
{
  int rd;
  int temp;

 for (int i = 0; i < capacity; ++i)
 {
  rd = biArr[i] + rhs.biArr[i] + rd;
  temp = rd % 10;
  rd /= 10;
  rhs.biArr[i] = temp;
  }
 return rhs;
}

int bigint::operator[](int i) const
{
 if (i < 0)
 return 0;
 if (i >= capacity)
 return 0;

 return biArr[i];
}

bigint bigint::timesDigit(int digit) const
 {

  bigint r;

  int value = 0;
  
  for (int i = 0; i < capacity; i++)
{
   remainder = biArr[i] * digit + remainder;
    value = remainder % 10;
    remainder /= 10;
    r.biArr[i] = value;
  }
  return r;
}

bigint bigint::times10(int x) const
{
    bigint result;
  for (int i = (capacity - x) - 1; i >= 0; i--)
    result.biArr[i + x] = biArr[i];

 for (int j = 0; j < x; j++)
    result.biArr[j] = 0;

  return result;
}

bigint bigint::operator*(bigint& x) const
{
   bigint mult(0);

   for (int i = 0; i < capacity; i++)
    mult = mult + (timesDigit(x.biArr[i])).times10(i);

  return mult;
}





