//20200317 
//name space

#include <iostream>
using namespace std;

namespace newSpace
{
	void func()
	{
		return;
	}
}

namespace _newSpace
{
	void func()
	{
		return;
	}
}

using namespace newSpace;
using namespace _newSpace;

int main()
{
	newSpace::func();
	_newSpace::func();
	
	
	returun 0;
}