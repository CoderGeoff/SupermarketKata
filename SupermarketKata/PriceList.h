#pragma once
#include <string>
#include <map>

class PriceList
{
public:
	PriceList();
	~PriceList() {};

	std::string TinOfBeans() const { return std::string("TinOfBeans"); };
	std::string TinOfSoup() const { return std::string("TinOfSoup"); };
	std::string TinOfPeaches() const { return std::string("TinOfPeaches"); };
	std::string Coleslaw() const { return std::string("Coleslaw"); };

	int operator [](const std::string& item);


private:
	std::map<std::string, int> m_Prices;
};

