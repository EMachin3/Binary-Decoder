#include <iostream>
#include <stack>
#include <string>
class BinaryDecoder
{
public:
	static int binaryDecoded(std::string& binary)
	{
		int num = 0;
		int position = 1;
		std::stack<int> stack;
		for (int i = 0; i < binary.size(); i++)
		{
			stack.push(charToBinary(binary.at(i)));
		}
		while (!stack.empty())
		{
			if (stack.top() == 1)
			{
				num += stack.top() * position;
			}
			stack.pop();
			position *= 2;
		}
		return num;
	}
	static int charToBinary(char& character)
	{
		if ((int)character == 48)
		{
			return 0;
		}
		else if ((int)character == 49)
		{
			return 1;
		}
		else
		{
			//__debugbreak();
			throw ("Invalid character in binary string. Please only use 0 or 1.");
		}
	}
};