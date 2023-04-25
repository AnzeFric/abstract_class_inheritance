//
// Created by anzef on 13. 04. 2023.
//

#include <algorithm>
#include "Graph.h"

Graph::Graph(const std::string &title, const std::vector<int> &data) : title(title), data(data){}

int Graph::getMaxValue() {
    return *std::max_element(std::begin(data), std::end(data));
}

int Graph::getMinValue() {
    return  *std::min_element(std::begin(data), std::end(data));
}