#pragma once
#include "Role.h"
struct FriendRole : public Role
{
    //战斗行为
    virtual void battleAction();
};
