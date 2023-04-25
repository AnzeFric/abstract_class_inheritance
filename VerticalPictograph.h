//
// Created by anzef on 17. 04. 2023.
//

#ifndef NALOGA0601_VERTICALPICTOGRAPH_H
#define NALOGA0601_VERTICALPICTOGRAPH_H


#include "Graph.h"

class VerticalPictograph : public Graph {
private:
    char symbol;
public:
    VerticalPictograph(const std::string &title, const std::vector<int> &data, char symbol);
    void show(ColorCode color) override;
};


#endif //NALOGA0601_VERTICALPICTOGRAPH_H
