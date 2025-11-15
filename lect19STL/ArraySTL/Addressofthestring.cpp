//data( ): This function returns the pointer to the first element of the array object. Because elements in the array are stored in contiguous memory locations. This data( ) function return us the base address of the string/char type object.
#include <iostream>
#include <cstring>
#include <array>

using namespace std;

int main ()
{
  const char* str = "GeeksforGeeks";
  array<char,13> arr;
  memcpy (arr.data(),str,13);
  cout << arr.data() << '\n';
  return 0;
}