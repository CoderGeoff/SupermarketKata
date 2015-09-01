#include "stdafx.h"

#include <cppUnit/TestCase.h>
#include <cppUnit/extensions/HelperMacros.h>

#include "TestFixtureMacro.h"
#include "..\SupermarketKata\PriceList.h"

TEST_FIXTURE(PriceListTests, 
	PriceOfTinOfBeansShouldBe40p, 
	PriceOfTinOfSoupShouldBe90p, 
	PriceOfTinOfPeachesShouldBe55p, 
	PriceOfColeslawShouldBe50p);

void PriceListTests::PriceOfTinOfBeansShouldBe40p()
{
	// Given
	PriceList priceList;

	// When
	auto price = priceList["TinOfBeans"];

	// Then
	CPPUNIT_ASSERT_EQUAL(40, price);
}

void PriceListTests::PriceOfTinOfSoupShouldBe90p()
{
	// Given
	PriceList priceList;

	// When
	auto price = priceList["TinOfSoup"];

	// Then
	CPPUNIT_ASSERT_EQUAL(90, price);
}

void PriceListTests::PriceOfTinOfPeachesShouldBe55p()
{
	// Given
	PriceList priceList;

	// When
	auto price = priceList["TinOfPeaches"];

	// Then
	CPPUNIT_ASSERT_EQUAL(55, price);
}

void PriceListTests::PriceOfColeslawShouldBe50p()
{
	// Given
	PriceList priceList;

	// When
	auto price = priceList["Coleslaw"];

	// Then
	CPPUNIT_ASSERT_EQUAL(50, price);
}

