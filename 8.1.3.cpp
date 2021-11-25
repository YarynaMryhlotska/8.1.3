#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
bool Include(const char* str, const char c, const char k)
{
	for (int i = 0; str[i] != '\0'; i++)
		if ((c == str[i] && k == str[i + 1]) || (k == str[i] && c == str[i + 1]))
			return true;
	return false;
}


char* Change(char* s)
{
	char* t = new char[strlen(s)];
	char* p;
	int pos1 = 0,
		pos2 = 0;
	*t = 0;
	while (p = strchr(s + pos1, 'S'))
	{
		if (s[p - s + 1] == 'Q')
		{
			pos2 = p - s + 3;
			strncat(t, s + pos1, pos2 - pos1 - 3);
			strcat(t, "***");
			pos1 = pos2;
		}
	}
	strcat(t, s + pos1);
	strcpy(s, t);
	return t;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	char cs[] = "SQ";
	if (strstr(str, cs))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	char* dest = new char[151];
		dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}