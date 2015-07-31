#include "stdafx.h"

#include <cppUnit/TestCase.h>
#include <cppUnit/extensions/HelperMacros.h>

#include "TestFixtureMacro.h"
#include "../SupermarketKata/Checkout.h"
#include "../SupermarketKata/PriceList.h"

TEST_FIXTURE(CheckoutTests,
    Basket1);


void CheckoutTests::Basket1()
{
    PriceList p;
    Checkout c;
    auto items = std::vector<std::string> { p.TinOfBeans(), p.TinOfBeans() };
    auto total = c.GetTotalPrice(items);
    CPPUNIT_ASSERT_EQUAL(80, total);
}
