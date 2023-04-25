#include <iostream>
#include "VerticalPictograph.h"
#include "HorizontalPictograph.h"

int main() {
    using namespace std::string_literals;
    system(("chcp "s + std::to_string(65001)).c_str());

    VerticalPictograph vp("Pictograph", std::vector<int>{5, 1, 3, 4}, '*');
    vp.show(ColorCode::Blue);

    VerticalPictograph vp2("Pictograph2", std::vector<int>{7, 2, 3, 4, 1}, '+');
    vp2.show(ColorCode::Red);

    VerticalPictograph vp3("Pictograph3", std::vector<int>{1, 2, 3, 4, 5}, '-');
    vp3.show(ColorCode::Green);

    VerticalPictograph vp4("Pictograph4", std::vector<int>{6, 5, 4, 3, 2, 1}, '&');
    vp4.show(ColorCode::Default);

    std::cout << "|||||||||" << std::endl;
    HorizontalPictograph hp("Hori Pictograph", std::vector<int>{1, 2, 3}, '*');
    hp.show(ColorCode::Red);

    HorizontalPictograph hp2("Hori Pictograph2", std::vector<int>{5, 1, 3, 4}, '+');
    hp2.show(ColorCode::Blue);

    return 0;
}
