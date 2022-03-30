//Дано літерний рядок, який містить послідовність символів s0, ..., sn, ... .
//1. Вияснити, чи є серед цих символів пара сусідніх букв “SQ” аб о ”QS”.

#include <iostream>
using namespace std;

bool Include(const string s, const string cs)
{
	bool b = false;
	for (int j = 0; s[j] != '\0'; j++)
		if ((s[j] == 'S') && (s[j + 1] == 'Q' || s[j - 1] == 'Q'))
		{
			for (size_t i = 0; i < cs.length(); i++)
				b = b && (s.find(cs[i]) != -1);
			b = true;
			break;
		}
	return b;
}

int main()
{
	string s("FGFF Q S FGJCCCCC");
	//cout << "Enter string:" << endl;
	//getline(cin, s);

	cout << "string: " << s << endl;

	string cs;
	cout << "Included groups of 'SQ or QS': ";
	if (Include(s, cs))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}

