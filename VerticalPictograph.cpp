//
// Created by anzef on 17. 04. 2023.
//

#include "VerticalPictograph.h"
#include "PrintUtility.h"

VerticalPictograph::VerticalPictograph(const std::string &title, const std::vector<int> &data, char symbol) : Graph(title, data), symbol(symbol){}

void VerticalPictograph::show(ColorCode color) {
    for(int i = Graph::getMaxValue(); i > 0; i--){
        for(int j : data){
            if(j >= i) {
                std::string s(1, symbol);
                s += " ";
                PrintUtility::print(color, s);
            } else{
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }

    for(int i : data){
        std::cout << "- ";
    }
    std::cout << std::endl;
    for(int i : data){
        std::cout << i << " ";
    }
    std::cout << std::endl;
}