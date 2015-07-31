#include "stdafx.h"

#include <cppUnit/TestCase.h>
#include <cppUnit/extensions/HelperMacros.h>

#include "TestFixtureMacro.h"
#include "../SupermarketKata/Basket.h"
#include <algorithm>

TEST_FIXTURE(BasketTests,
    TestBasket1,
    TestBasket2);

void BasketTests::TestBasket1()
{
    Basket b;
    CPPUNIT_ASSERT_EQUAL(0, b.Count());
}

void BasketTests::TestBasket2()
{
    Basket b;
    CPPUNIT_ASSERT_EQUAL(b.Count(), 0);
    b.Add("TinOfBeans");
    b.Add("Coleslaw");
    b.Add("TinOfBeans");
    CPPUNIT_ASSERT_EQUAL(b.Count(), 3);
    auto i = b.begin();
    for (int ii = 0; ii < 3; ++ii, ++i)
    {
        switch (ii)
        {
        case 0:
        case 2:
            CPPUNIT_ASSERT_EQUAL(*i, std::string("TinOfBeans"));
            break;
        case 1:
            CPPUNIT_ASSERT_EQUAL(*i, std::string("Coleslaw"));
        }
    }
}