#include "stdafx.h"

#include <cppUnit/TestCase.h>
#include <cppUnit/extensions/HelperMacros.h>

#include "TestFixtureMacro.h"
#include "..\SupermarketKata\PriceList.h"

TEST_FIXTURE(PriceListTests, 
	PriceOfTinOfBeansIs40p, 
	PriceOfTinOfSoupIs90p, 
	PriceOfTinOfPeachesIs55p, 
	PriceOfColeslawIs50p);

void PriceListTests::PriceOfTinOfBeansIs40p()
{
	// Arrange
	PriceList priceList;

	// Act
	auto price = priceList.LookUp("TinOfBeans");

	// Assert
	CPPUNIT_ASSERT_EQUAL(40, price);
}

void PriceListTests::PriceOfTinOfSoupIs90p()
{
	// Arrange
	PriceList priceList;

	// Act
    auto price = priceList.LookUp("TinOfSoup");

	// Assert
	CPPUNIT_ASSERT_EQUAL(90, price);
}

void PriceListTests::PriceOfTinOfPeachesIs55p()
{
	// Arrange
	PriceList priceList;

	// Act
    auto price = priceList.LookUp("TinOfPeaches");

	// Assert
	CPPUNIT_ASSERT_EQUAL(55, price);
}

void PriceListTests::PriceOfColeslawIs50p()
{
	// Arrange
	PriceList priceList;

	// Act
    auto price = priceList.LookUp("Coleslaw");

	// Assert
	CPPUNIT_ASSERT_EQUAL(50, price);
}

