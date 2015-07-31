#include "stdafx.h"

#include <cppUnit/TestCase.h>
#include <cppUnit/extensions/HelperMacros.h>

#include "TestFixtureMacro.h"
#include "../SupermarketKata/Basket.h"
#include <numeric>

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
    auto append = [](std::string& contents, const std::string& next) { return contents + (contents.length() == 0 ? "" : ", ") + next; };
    auto basketContents = std::accumulate(basket.begin(), basket.end(), std::string(""), append);

    // Then
    auto expectedContents = std::string("TinOfBeans, Coleslaw, TinOfBeans");
    CPPUNIT_ASSERT_EQUAL(expectedContents, basketContents);
}