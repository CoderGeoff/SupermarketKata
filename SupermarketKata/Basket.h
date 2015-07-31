#pragma once
#include <string>
#include <vector>

class Basket
{
public:
    void Add(const std::string& item);
    int Count() const;
    typedef std::vector<std::string>::const_iterator const_iterator;
    const_iterator begin() const;
    const_iterator end() const;
private:
    std::vector<std::string> m_Items;
};

