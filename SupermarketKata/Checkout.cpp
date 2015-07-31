#include "stdafx.h"
#include "Checkout.h"
#include "PriceList.h"
#include <numeric>


int Checkout::GetTotalPrice(std::vector<std::string> items)
{
    PriceList priceList;
    auto add = [priceList](int runningTotal, std::string item) -> int { return runningTotal + priceList.LookUp(item); };
    return std::accumulate(items.begin(), items.end(), 0, add);
}