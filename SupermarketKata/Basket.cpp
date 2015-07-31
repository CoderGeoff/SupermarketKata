#include "stdafx.h"
#include "Basket.h"

void Basket::Add(const std::string& item)
{
    m_Items.push_back(item);
}

int Basket::Count() const
{
    return m_Items.size();
}

Basket::const_iterator Basket::begin() const
{
    return m_Items.begin();
}

Basket::const_iterator Basket::end() const
{
    return m_Items.end();
}