#include <iostream>
#include <cstring>
#include "AMemPool.h"

int main()
{
	using namespace amp;

	AMemPool a(1024);
	auto *mem = static_cast<char *>(a.AAlloc(1024));
	memcpy(mem, "Hello, worffld", 11);


	std::cout << mem << std::endl;
	return 0;
}