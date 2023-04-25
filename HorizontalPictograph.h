//
// Created by anzef on 17. 04. 2023.
//

#ifndef NALOGA0601_HORIZONTALPICTOGRAPH_H
#define NALOGA0601_HORIZONTALPICTOGRAPH_H


#include "Graph.h"

class HorizontalPictograph : public Graph {
private:
    char symbol;
public:
    HorizontalPictograph(const std::string &title, const std::vector<int> &data, char symbol);
    void show(ColorCode color) override;
};


#endif //NALOGA0601_HORIZONTALPICTOGRAPH_H
