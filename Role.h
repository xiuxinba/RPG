#pragma once
#include <iostream>
#include <string>
using namespace std;

struct Role
{
    bool ForE;       //判断是友或敌
    int m_level;     //等级
    string m_name;   //名字
    int m_maxHealth; //最大生命值
    int m_atk;       //攻击力
    int m_speed;     //速度

    virtual void battleAction();
};

void Role::battleAction()
{
}
