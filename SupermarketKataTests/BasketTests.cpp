#include "stdafx.h"

#include <cppUnit/TestCase.h>
#include <cppUnit/extensions/HelperMacros.h>

#include "TestFixtureMacro.h"
#include "../SupermarketKata/Basket.h"
#include <algorithm>

TEST_FIXTURE(BasketTests,
    GivenAnEmptyBasket_CountShouldBeZero,
    GivenThreeItemsAreAddedToBasket_WhenCounted_BasketShouldContainThreeItems,
    GivenThreeItemsAreAddedToBasket_WhenExamined_BasketShouldContainTheAddedItems);

void BasketTests::GivenAnEmptyBasket_CountShouldBeZero()
{
    Basket basket;
    CPPUNIT_ASSERT_EQUAL(0, basket.Count());
}

void BasketTests::GivenThreeItemsAreAddedToBasket_WhenCounted_BasketShouldContainThreeItems()
{
    Basket basket;
    basket.Add("TinOfBeans");
    basket.Add("Coleslaw");
    basket.Add("TinOfBeans");
    CPPUNIT_ASSERT_EQUAL(basket.Count(), 3);
}

void BasketTests::GivenThreeItemsAreAddedToBasket_WhenExamined_BasketShouldContainTheAddedItems()
{
    Basket basket;
    basket.Add("TinOfBeans");
    basket.Add("Coleslaw");
    basket.Add("TinOfBeans");

    std::stringstream contentsStringBuilder;
    for (auto itemIterator = basket.begin(); itemIterator != basket.end(); ++itemIterator)
    {
        contentsStringBuilder << (itemIterator == basket.begin() ? "" : ", ");
        contentsStringBuilder << *itemIterator;
    }
    CPPUNIT_ASSERT_EQUAL(std::string("TinOfBeans, Coleslaw, TinOfBeans"), contentsStringBuilder.str());
}