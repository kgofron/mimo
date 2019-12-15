#include <iostream>
#include <cstdlib>

using namespace std;

/* 201103 for C++11  (c++0x)  <- with -std=c++0x
   201402 for C++14  (c++1y)
   201703 for c++17  (c++1z)
g++ main.cpp -o ver.out -std=c++0x 

From the command line:
g++ -x c++  -E -dM -< /dev/null | grep __cplusplus
*/

int main()
{
  string city, state = "IL";
  city = state = "New York";
  auto myName = "Kaz";
  cout << myName << endl;
  std::string name = "Henry";
  int number1 = 9;
  double number2 = 9.12345;
  std::cout << number1 << "  " << number2 << std::endl;
  std::cout << "Hi there, " << name << "\n";
  std::cout << __cplusplus << std::endl;

  int languageCount(10);
  ++languageCount;
  auto language = "C++";
  cout << "Captain Code knows " << languageCount << 
  " languages, including " << language << endl;

// with namespace std
  cout << "Hi, " << name << endl;

  bool b = true;
  cout << b << endl;
  cout << boolalpha << b;
  cout << endl;

  int ptrArr[3] = {0, 1, 2};
  int *ptr;
  ptr = ptrArr;
  cout << *ptr;
  ptr++;
  cout << *ptr;
  ptr++;
  cout << *ptr << endl;
  cout << ptrArr << endl;
  cout << &ptrArr[0] << endl;

  string languages[3] = { "C++", "JavaScript", "SQL"};
  string *languagePtr;
  languagePtr = languages;
  cout << *languagePtr << ", ";
  languagePtr++;
  cout << *languagePtr << ", ";
  languagePtr++;  
  cout << *languagePtr << endl;

  int age = 42;
  int *agePtr;
  agePtr = &age;
  cout << agePtr << endl;
  cout << *agePtr << endl;

//  return 0;

//  exit(0);
}