#pragma once
#include "Graph.cpp"

template <class T>
class StackFrontier {
    protected:
        std::vector<Node<Pair<T>>*>* frontier;
    public:
        StackFrontier();
        virtual ~StackFrontier();
        virtual void add(Node<Pair<T>>* node);
        bool empty();
        bool inFrontier(Pair<T> pair);
        virtual void replace(Node<Pair<T>>* node);
        Node<Pair<T>>* getNode(Node<Pair<T>>* node);
        virtual Node<Pair<T>>* remove();
        void del(Node<Pair<T>>* node);
        virtual int distance(Pair<T> p);
        virtual void printHBoard();
        void print();
        void printOne();
};