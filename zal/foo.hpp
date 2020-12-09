#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

using namespace std;

vector< char > foo(list< Human >& people)
{
    vector<char> v;
    for(auto it=people.rbegin();it!=people.rend();it++){
        it->birthday();
        if(it->isMonster()) v.push_back('n');
        else v.push_back('y');
    }
    return {v};
}
