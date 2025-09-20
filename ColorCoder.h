#pragma once
#include "ColorPair.h"
#include <vector>
#include <string>

namespace TelCoColorCoder {

ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(MajorColor major, MinorColor minor);

// New features
std::vector<ColorPair> GetAllColorPairs();
std::string FormatColorReference();        // Printable manual
std::string FormatColorReferenceCSV();     // CSV version

} // namespace TelCoColorCoder
