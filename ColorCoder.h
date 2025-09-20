#pragma once
#include "ColorPair.h"   // stays this way
#include <vector>
#include <string>

namespace TelCoColorCoder {

ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(MajorColor major, MinorColor minor);

std::vector<ColorPair> GetAllColorPairs();
std::string FormatColorReference();
std::string FormatColorReferenceCSV();

} // namespace TelCoColorCoder
