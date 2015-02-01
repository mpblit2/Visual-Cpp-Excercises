#include<iostream>

using std::cout;
using std::endl;

void showlimit(const char [] = "Cos jest nie tak");

int main(void)
{
	const char mymess[] = "Koniec swiata jest bliski";
	showlimit();
	showlimit("Jest bardzo zle");
	showlimit();
	showlimit(mymess);

	getchar();
	return 0;
}

void showlimit(const char message[])
{
	cout << endl
		 << message;

	return;
}