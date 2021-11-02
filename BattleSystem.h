#pragma once
#include <iostream>
#include "Role.h"

using namespace std;

struct BattleSystem
{
    //全体角色数组
    Role allRole[8];

    //我方战斗行为
    void friBattleAction();

    //敌方战斗行为
    void EneBattleAction();

    //构造函数, 传入双方阵型
    BattleSystem();
};

BattleSystem::BattleSystem()
{
}
