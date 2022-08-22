#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"

int main()
{
	// Engineer eng1("Daniel Gray", 41, "Green Sky Oh Blue 33St#75", 12);
	// std::cout << "-------------------" << std::endl;
	// Engineer eng2(eng1);
	// std::cout << "Engineer 2: " << eng2 << std::endl;
	// std::cout << "-------------------" << std::endl;
	CivilEngineer cvl1("Daniel Gray", 41, "Green Sky Oh Blue 33St#75", 12, "Road");
	std::cout << "-------------------" << std::endl;
	CivilEngineer cvl2(cvl1);
	std::cout << "Civil Engineer 2: " << cvl2 << std::endl;

	return 0;
}