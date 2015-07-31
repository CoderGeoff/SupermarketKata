#include "stdafx.h"
#include "PriceList.h"


PriceList::PriceList()
{
	m_Prices[TinOfBeans()] = 40;
	m_Prices[TinOfSoup()] = 90;
	m_Prices[TinOfPeaches()] = 55;
	m_Prices[Coleslaw()] = 50;
}



int PriceList::LookUp(const std::string& item) const
{
    auto lookup = m_Prices.find(item);
    return lookup == m_Prices.end() ? 0 : lookup->second;
}


