#include "UBCalculator.h"
#include <sstream>

const std::map<char, char> UBCalculator::delimMatch = UBCalculator::createDelimMatch();
const  std::map<char, int> UBCalculator::precedenceMap = UBCalculator::createPrecedenceMap();
const std::string UBCalculator::openDelims = "([{";
const std::string UBCalculator::closeDelims = ")]}";

// Evaluate str 
void UBCalculator::setLine(std::string str)
{
   return;
}
