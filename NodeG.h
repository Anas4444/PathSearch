#pragma once
#include "Data.cpp"
#include "Node.cpp"

struct NodeG {
        Data data;
        Pair<int> position;
        std::vector<NodeG*>* points;
        std::vector<NodeG*> fullpt;
        NodeG* parent;
        NodeG* next;
        int steps;

        NodeG();
        NodeG(Pair<int> pos);
        NodeG(Pair<int> pos, NodeG* p);
        NodeG(Data d, Pair<int> pos);
        NodeG(Data d, Pair<int> pos, std::vector<NodeG*>* p);
        NodeG(Data d, Pair<int> pos, NodeG* p);
        NodeG(NodeG& node);
        void setPoints(std::vector<NodeG*>* p);
        void setNext(NodeG* p);
        void addPoint(NodeG* pt);
        void addPt(NodeG* node);
        void setData(Data d);
        void print();
        bool inVector(NodeG* node, std::vector<NodeG*> vec);
};