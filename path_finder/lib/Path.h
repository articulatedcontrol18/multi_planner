//
//  Path.h
//  path_finder
//
//  Created by Aleksandar Babunovic on 2018-03-05.
//  Copyright © 2018 Aleksandar Babunovic. All rights reserved.
//

#ifndef Path_h
#define Path_h
#include <stdlib.h>
#include <vector>
#include "Node.h"
#include "Point2D.h"

using namespace std;

class Path{
private:
    /*
     The path starting node at 0
     */
    Path(int);
    vector<Node*>* path;
    double cost;
    int length;
    void printPath(vector<Node*>*);
    
public:
    Path(vector<Node*>*);
    Path();
    ~Path();
    int path_length();
    double getCost();
    void setCost(double);
    Node* fst();
    void print();
    void addNode(Node*);
    vector<Node*>* getPath();
    Path* addNodeAndClone(Node*);
    bool equals(Path*);
};

#endif /* Path_h */
