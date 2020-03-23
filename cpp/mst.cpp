enum color {RED, BLUE, GREEN};

enum Class Color {RED, BLUE, GREEN};
enum Class Traffic {RED, GREEN, BLUE};


// Strong (scoped) enum
namespace MyNamespace
{
  enum class Colors
  {
    Red,
    Green,
    Blue
  };
 
  enum class OtherColors
  {
    Yellow,
    Blue,
  };
}
 
using namespace MyNamespace;
 
int _tmain(int argc, _TCHAR* argv[])
{
  Colors color = Colors::Blue;
  OtherColors otherColors = OtherColors::Blue;
 
  int enumValue = Colors::Red;  // error
 
  return 0;
}

// Unscoped enum
namespace MyNamespace
{
  enum Colors
  {
    Red,
    Green,
    Blue
  };
 
  enum OtherColors
  {
    Yellow,
    Blue,   // error
  };
}
 
using namespace MyNamespace;
 
int _tmain(int argc, _TCHAR* argv[])
{
    return 0;
}