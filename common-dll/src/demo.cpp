#include <iostream>
#include <vector>
#include <string>
#include "my_common_lib.h"

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    string s1 = "krz";
    char dst[256];
    bool result = my_func_a(s1.data(), dst);
    cout << "result: " << result << endl;
    cout << dst << endl;
}
