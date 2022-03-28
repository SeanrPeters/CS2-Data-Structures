
/*
 Sean Peters
 String.cpp
 cs 23001
*/

#include "string.hpp"
#include <iostream>
#include <vector>

String::String(){
  stringSize = 1;
  str = new char[stringSize];
  str[0] =0;
}

String::String(char c)
{
   str[0] = c;
   str[1]= '\0';

}


 String operator +(char ch, const String& st)
{
   return (String(ch) + st);
}


 String operator +(String stOne, const String& stTwo)
{
   return (String(stOne) + stTwo);
}



String& String::operator +=(const String& rs)
{

  int i = 0, l = 255;

  while (rs.str[i] != 0)

    if (l + i == 256)
    break;

    str[l + i] = rs.str[i];
    i++;
     }

  str[l + i] = 0;
  return *(this);
}

bool String::operator ==(const String& rs) const
{
  if (rs.length() == length())
  {
    for (int i = 0; str[i] != '\0'; ++i)
    {
    if (rs[i] != '\0')
    if ( str[i] != rs[i])
    return false;
    }
  return true;
  }
 return false;
}

bool String::operator <(const String& rs) const
{
 int i = 0;
  while (str[i] == rs.str[i] && rs.str[i] != 0 && str[i] != 0)
  ++i;

  return str[i] < rs.str[i];
}


char& String::operator[] (int m)
{
  if (m < 0)
  m = 0;
  return str[m];
}

  {
  if (a < 0)
  a = 0;

  return str[a];
  }

int String:: capacity() const
{
  return 255;
}

int String::length() const
{
  int i = 0;

  if (str[i] == 0)
  return 0;

  while(str[i] != '\0')
   ++i;

  return i;
}

String String::substr (int start, int end) const
{
  if (start < 0)
  start = 0;

  if (start > length())
  start = length() - 1;

  if(end > length())
  end = length() -1;

  if (end < 0)
  end = 0;

  if (end < start)
  return "";

  String result(end - start + 1);

  for(int i = 0; i <= (end - start); i++)
{
  result.str[i] = str[i + start];
  result.str[i] = '\0';
}
 return result;
}

int String::findch(int pos, const char ch) const
{
    int i = pos;

    while ((i <= length()) && (ch != str[i]))
         i++;
    if(i > length())
        return -1;
    else
        return i;
}

int String::findstr (int pos, const String& sr) const
{
  while (pos <= (length() - sr.length()))
  {
    if (substr(pos, pos + sr.length() - 1) == sr)
    return pos;

    pos++;
   }

  return -1;
}

std::istream& operator>> (std::istream& in, String& rhs)

{
    int s = 0;
    char c[s];

    if(!in.eof())
   {
      in >> c;
      rhs = String(c);

    }

    else
   {
      rhs = String();
      ++s;
    }

    return in;
  }


std::ostream& operator<< (std::ostream& out, const String& rhs)
{
 for (int i = 0; rhs[i] != 0; ++i)
  out << rhs.str[i];

 return out;
 }

String::~String()
{
  stringSize=0;
  delete [] str;
  str = nullptr;
}

String::String(const String& rhs){
  stringSize = rhs.stringSize;
  str = new char[stringSize];
  for(int i = 0; i < stringSize - 1; ++i) {
    str[i] = rhs.str[i];
  }
  str[stringSize - 1] = 0;
}

String& String::operator=(String rhs){
    swap(rhs);
    return *this;
}

void String::swap(String& rhs){
  char *tmp = str;
stringSize=0;
  delete [] str;
  str = nullptr;
}

String::String(const String& rhs){
  stringSize = rhs.stringSize;
  str = new char[stringSize];
  for(int i = 0; i < stringSize - 1; ++i) {
    str[i] = rhs.str[i];
  }
  str[stringSize - 1] = 0;
}

String& String::operator=(String rhs){
    swap(rhs);
    return *this;
}

void String::swap(String& rhs){
  char *tmp = str;
  str = rhs.str;
  rhs.str = tmp;

  int tmpSize = stringSize;
  stringSize = rhs.stringSize;
  rhs.stringSize = tmpSize;
}
