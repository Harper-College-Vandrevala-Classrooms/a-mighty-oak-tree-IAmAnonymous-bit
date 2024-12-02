#pragma once

using namespace std;

#include "squirrel.hpp"
#include <string>
#include <iostream>

class OakNode
{
    private:
        Squirrel *s;
        OakNode *l;
        OakNode *r;
    public:
        OakNode()
        {
            this->s = nullptr;
            this->l = nullptr;
            this->r = nullptr;
        }

        OakNode(Squirrel *s)
        {
            this->s = s;
            this->l = nullptr;
            this->r = nullptr;
        }

        void set_squirrel(Squirrel *s)
        {
            this->s = s;
        }

        Squirrel get_squirrel()
        {
            return *this->s;
        }

        void set_right(OakNode *right)
        {
            this->r = right;
        }

        void set_left(OakNode *left)
        {
            this->l = left;
        }

        OakNode right()
        {
            return *this->r;
        }

        OakNode left()
        {
            return *this->l;
        }

};