#This time no story, no theory. The examples below show you how to write function accum:

#Examples:

#accum("abcd") -> "A-Bb-Ccc-Dddd"
#accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
#accum("cwAt") -> "C-Ww-Aaa-Tttt"
#The parameter of accum is a string which includes only letters from a..z and A..Z.

#include <iostream>
#include <string>
using namespace std;
class Accumul
{
public:
    static string accum(const string &s) {
      string result;
      for (int i = 0; i < s.length(); i++) {
        result.append("-");
        result.append(string(1,toupper(s[i])));
        result.append(string(i,tolower(s[i])));
       
      }
      return result.substr(1,result.length());
    }
};

int main()
{
      Accumul obj;
      cout << obj.accum("abc");

    return 0;
}
