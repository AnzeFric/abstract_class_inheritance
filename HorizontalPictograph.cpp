//
// Created by anzef on 17. 04. 2023.
//

#include "HorizontalPictograph.h"
#include "PrintUtility.h"

HorizontalPictograph::HorizontalPictograph(const std::string &title, const std::vector<int> &data, char symbol) : Graph(title, data), symbol(symbol){}

void HorizontalPictograph::show(ColorCode color) {
    for(int i : data){
        std::cout << std::to_string(i) + " | ";
        for(int j = 0; j < i; j++){
            std::string s(1, symbol);
            s += " ";
            PrintUtility::print(color, s);
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
