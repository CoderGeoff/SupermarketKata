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
    Basket basket;
    CPPUNIT_ASSERT_EQUAL(0, basket.Count());
}

void BasketTests::GivenThreeItemsAreAddedToBasket_WhenExamined_BasketShouldContainTheAddedItems()
{
    Basket basket;
    CPPUNIT_ASSERT_EQUAL(basket.Count(), 0);
    basket.Add("TinOfBeans");
    basket.Add("Coleslaw");
    basket.Add("TinOfBeans");
    CPPUNIT_ASSERT_EQUAL(basket.Count(), 3);
    auto basketIterator = basket.begin();
    for (int itemIndex = 0; itemIndex < 3; ++itemIndex, ++basketIterator)
    {
        switch (itemIndex)
        {
        case 0:
        case 2:
            CPPUNIT_ASSERT_EQUAL(*basketIterator, std::string("TinOfBeans"));
            break;
        case 1:
            CPPUNIT_ASSERT_EQUAL(*basketIterator, std::string("Coleslaw"));
        }
    }
}