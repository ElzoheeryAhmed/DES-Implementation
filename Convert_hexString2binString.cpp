#include <bits/stdc++.h>

using namespace std;


string hex2bin(string s)
{
	// hexadecimal to binary conversion
	unordered_map<char, string> mp;
	mp['0'] = "0000";
	mp['1'] = "0001";
	mp['2'] = "0010";
	mp['3'] = "0011";
	mp['4'] = "0100";
	mp['5'] = "0101";
	mp['6'] = "0110";
	mp['7'] = "0111";
	mp['8'] = "1000";
	mp['9'] = "1001";
	mp['A'] = "1010";
	mp['B'] = "1011";
	mp['C'] = "1100";
	mp['D'] = "1101";
	mp['E'] = "1110";
	mp['F'] = "1111";
	mp['a'] = "1010";
	mp['b'] = "1011";
	mp['c'] = "1100";
	mp['d'] = "1101";
	mp['e'] = "1110";
	mp['f'] = "1111";
	string bin = "";
	for (int i = 0; i < s.size(); i++)
	{
		bin += mp[s[i]];
	}
	return bin;
}