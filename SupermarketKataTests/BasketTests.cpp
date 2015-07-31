#include "stdafx.h"

#include <cppUnit/TestCase.h>
#include <cppUnit/extensions/HelperMacros.h>

#include "TestFixtureMacro.h"
#include "../SupermarketKata/Basket.h"
#include <algorithm>

TEST_FIXTURE(BasketTests,
    GivenAnEmptyBasket_CountShouldBeZero,
    GivenThreeItemsAreAddedToBasket_WhenExamined_BasketShouldContainTheAddedItems);

void BasketTests::GivenAnEmptyBasket_CountShouldBeZero()
{
    Basket b;
    CPPUNIT_ASSERT_EQUAL(0, b.Count());
}

void BasketTests::GivenThreeItemsAreAddedToBasket_WhenExamined_BasketShouldContainTheAddedItems()
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