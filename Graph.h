//
// Created by anzef on 13. 04. 2023.
//

#ifndef NALOGA0601_GRAPH_H
#define NALOGA0601_GRAPH_H


#include <string>
#include <vector>
#include "ColorCode.h"


class Graph {
protected:
    std::string title;
    std::vector<int> data;
public:
    Graph(const std::string &title, const std::vector<int> &data);
    int getMaxValue();
    int getMinValue();
    virtual void show(ColorCode color) = 0;
};


#endif //NALOGA0601_GRAPH_H
