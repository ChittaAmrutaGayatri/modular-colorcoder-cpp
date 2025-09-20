#pragma once
#include <string>

namespace TelCoColorCoder {

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const int numberOfMajorColors = sizeof(MajorColorNames)/sizeof(MajorColorNames[0]);

const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
const int numberOfMinorColors = sizeof(MinorColorNames)/sizeof(MinorColorNames[0]);

class ColorPair {
private:
    MajorColor majorColor;
    MinorColor minorColor;
public:
    ColorPair(MajorColor major, MinorColor minor);
    MajorColor getMajor() const;
    MinorColor getMinor() const;
    std::string ToString() const;
};

} // namespace TelCoColorCoder
