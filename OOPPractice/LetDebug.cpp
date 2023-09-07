#include <iostream>

class LetDebug
{
public:
	void printNum()
	{
		int s1 = 32767;
		int s2 = 2;
		int s3 = s1 + s2;
		std::cout << s3 << std::endl;
	}
};

int main()
{
	LetDebug* id = new LetDebug();
	id->printNum();
	return 0;
}