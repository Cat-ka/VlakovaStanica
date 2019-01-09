#include <iostream>
#include <fstream>
#include "Trat.h"
#include "ZoznamStanic.h"

int main(int argc, char *argv[])
{
	ZoznamStanic stanice = ZoznamStanic();
	std::ifstream inputFile("trat.txt");
	stanice.nacitajStanice(inputFile);
	std::cout << "*********************" << std::endl;
	stanice.usporiadanyVypis();
	std::cout << "*********************" << std::endl;
	stanice.cestaOsobakom();
	std::cout << "*********************" << std::endl;
	stanice.cestaRychlikom();
	std::cout << "*********************" << std::endl;
	stanice.prestup();
	return 0;
}