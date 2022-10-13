#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "0011010000101101101101011010100000011101110110111001000000000100";
    unsigned long long value = stoull(s, 0, 2);
    cout << value << endl;
}