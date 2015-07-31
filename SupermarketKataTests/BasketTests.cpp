#include "stdafx.h"

#include <cppUnit/TestCase.h>
#include <cppUnit/extensions/HelperMacros.h>

#include "TestFixtureMacro.h"
#include "../SupermarketKata/Basket.h"

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
    CPPUNIT_ASSERT_EQUAL(3, basket.Count());
}

void BasketTests::GivenThreeItemsAreAddedToBasket_WhenExamined_BasketShouldContainTheAddedItems()
{
    // Given
    Basket basket;
    basket.Add("TinOfBeans");
    basket.Add("Coleslaw");
    basket.Add("TinOfBeans");

    // When
    std::string basketContents;
    for each (auto item in basket)
    {
        basketContents += (basketContents.length() == 0 ? "" : ", ");
        basketContents += item;
    }

    // Then
    auto expectedContents = std::string("TinOfBeans, Coleslaw, TinOfBeans");
    CPPUNIT_ASSERT_EQUAL(expectedContents, basketContents);
}