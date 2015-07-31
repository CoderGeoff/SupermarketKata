#pragma once
#include <string>
#include <map>

class PriceList
{
public:
	PriceList();
	~PriceList() {};

	const std::string TinOfBeans() const { return std::string("TinOfBeans"); };
	const std::string TinOfSoup() const { return std::string("TinOfSoup"); };
	const std::string TinOfPeaches() const { return std::string("TinOfPeaches"); };
	const std::string Coleslaw() const { return std::string("Coleslaw"); };

    int LookUp(const std::string& item) const;

private:
	std::map<std::string, int> m_Prices;
};

