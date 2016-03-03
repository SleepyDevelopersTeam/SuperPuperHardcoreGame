//
//  LevelStorage.cpp
//  SPH
//
//  Created by v144 on 02.03.16.
//
//

#include "LevelStorage.hpp"


LevelStorage* LevelStorage::instance=NULL;

LevelStorage* LevelStorage::getInstance()
{
    if (instance==NULL)
    {
        instance = new LevelStorage;
    }
    return instance;
}

cocos2d::Node *LevelStorage::getLevel(int levelNumber)
{
    return cocos2d::Node::create();
}