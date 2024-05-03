#include <iostream>

// You can use namespaces.
//using namespace std;

// Or use individually.
using std::cout;

// Use typedef for 'aliases' from an existing type.
typedef std::string text_t;

// For a more versatile option, please use the 'using' keyword, since it works with templates.
using integer_t = int;

int main() {
    text_t text = "My name is Bob";
    integer_t number = 23;

    cout << text << "\n";
    cout << number << "\n";
    return 0;
}
