#Simple, given a string of words, return the length of the shortest word(s).
#String will never be empty and you do not need to account for different data types.

int find_short(std::string str)
{
  std::istringstream input(str);
  std::string s;
  int len = -1;
  while (std::getline(input, s, ' '))
    if (s.length() < len)
    len = s.length();
  return len;
}
