#include <iostream>

template<typename T>
void printMemory(const std::string& valName, const T& value) {
    std::cout << valName << &value << " " << sizeof(value) << std::endl;
}

int main()
{
	int intv = 1;
	short shortv = 1;
	long longv = 1;
	long long dlongv = 1;
	float floatv = 1.1f;
	double doublev = 1.1;
	long double ldoublev = 1.1;
	bool boolv = true;
	
	printMemory("short: ", shortv);
	printMemory("int: ", intv);
	printMemory("long: ", longv);
	printMemory("long long: ", dlongv);
	printMemory("float: ", floatv);
	printMemory("double: ", doublev);
	printMemory("long double: ", ldoublev);
	printMemory("bool: ", boolv);
}
