#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

using namespace std;

vector< char > foo(list< Human >& people)
{
    vector<char> v;
    vector<char>::iterator it;
    for(it=people.begin();it!=people.end();it++){
        it->birthday();
        if(it->isMonster()) v.push_back('n');
        else v.push_back('y');
    }
    return {v};
}
